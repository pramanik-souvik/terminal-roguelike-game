#include "monster.h"
#include <stdlib.h>
#include <time.h>  // <-- for srand()

void init_monsters(MonsterArray *monsters) {
    monsters->count = 0;

    // Seed the RNG (only once, ideally in game init)
    srand(time(NULL));

    // Example: add a single monster at start
    if (monsters->count < MAX_MONSTERS) {
        monsters->monsters[monsters->count].x = 5;
        monsters->monsters[monsters->count].y = 5;
        monsters->monsters[monsters->count].hp = 5;
        monsters->monsters[monsters->count].attack = 1;
        monsters->monsters[monsters->count].defense = 0;
        monsters->monsters[monsters->count].symbol = 'M';
        monsters->count++;
    }
}

void move_monsters(MonsterArray *monsters) {
    // Simple AI: move randomly
    for (int i = 0; i < monsters->count; i++) {
        monsters->monsters[i].x += (rand() % 3) - 1; // -1, 0, 1
        monsters->monsters[i].y += (rand() % 3) - 1;
    }
}