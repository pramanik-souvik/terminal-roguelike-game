#pragma once

#define MAX_MONSTERS 50

typedef struct {
    int x, y;       // Position
    int hp;         // Health points
    int attack;
    int defense;
    char symbol;    // Character to display on map
} Monster;

typedef struct {
    Monster monsters[MAX_MONSTERS];
    int count;
} MonsterArray;

void init_monsters(MonsterArray *monsters);
void move_monsters(MonsterArray *monsters);