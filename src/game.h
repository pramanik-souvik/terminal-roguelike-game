#pragma once

#include "map.h"
#include "player.h"
#include "monster.h"

// Main game state structure
typedef struct {
    Map map;             // Dungeon map
    Player player;       // Player state
    MonsterArray monsters; // Array of monsters
    int running;         // Flag to control game loop
} Game;

// Declare functions for the game
void init_game();
void shutdown_game();
void draw_game();
void handle_input(int ch);
void game_loop();