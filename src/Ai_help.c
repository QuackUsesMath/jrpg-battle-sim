/*
#include <stdio.h>

#define GAUGE_MAX 100
#define PARTY_SIZE 3

typedef struct {
    const char *name;
    int speed;
    int gauge;
} Combatant;

void tick(Combatant *c) {
    c->gauge += c->speed;
    if (c->gauge > GAUGE_MAX) {
        c->gauge = GAUGE_MAX;
    }
}

Combatant *find_ready(Combatant party[], int n) {
    for (int i = 0; i < n; i++) {
        if (party[i].gauge >= GAUGE_MAX) {
            return &party[i];
        }
    }
    return NULL;
}

int main(void) {
    Combatant party[PARTY_SIZE] = {
        {"Bartz", 8, 0},
        {"Lenna", 6, 0},
        {"Faris", 10, 0}
    };
    int t = 0;

    while (t < 60) {
        Combatant *who = find_ready(party, PARTY_SIZE);

        if (who == NULL) {
            for (int i = 0; i < PARTY_SIZE; i++) {
                tick(&party[i]);
            }
            t++;
        } else {
            printf("tick %d: %s is ready. Command (1 = attack)? ", t, who->name);
            int cmd;
            if (scanf("%d", &cmd) != 1) {
                break;
            }
            printf("%s attacks!\n", who->name);
            who->gauge = 0;
        }
    }
    return 0;
}
*/