CC = gcc
CFLAGS = -Wall -Wextra -Iinclude -MMD -MP

ifeq ($(OS),Windows_NT)
    TARGET = main.exe
else
    TARGET = main
endif

SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c,build/%.o,$(SRC))
DEP = $(OBJ:.o=.d)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $@

build/%.o: src/%.c | build
	$(CC) $(CFLAGS) -c $< -o $@

build:
	mkdir -p build

clean:
	rm -rf build $(TARGET)

.PHONY: clean

-include $(DEP)