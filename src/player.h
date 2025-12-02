#pragma once

typedef struct {
    int x, y;       // Player position
    int hp;         // Health points
    int attack;     // Attack power
    int defense;    // Defense
} Player;

void init_player(Player *player);
void move_player(Player *player, int dx, int dy);
