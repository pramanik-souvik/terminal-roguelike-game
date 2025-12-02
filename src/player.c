#include "player.h"

void init_player(Player *player) {
    player->x = 1;       // Starting position
    player->y = 1;
    player->hp = 10;     // Default HP
    player->attack = 2;
    player->defense = 1;
}

void move_player(Player *player, int dx, int dy) {
    player->x += dx;
    player->y += dy;
}