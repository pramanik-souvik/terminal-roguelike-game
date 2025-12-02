#include "game.h"
#include "map.h"
#include "player.h"
#include "monster.h"
#include <ncurses.h>
#include <stdlib.h>
#include <time.h>

Game game;  // Global game state

// Initialize the game
void init_game() {
    srand(time(NULL));

    // Initialize ncurses
    initscr();
    noecho();
    cbreak();
    curs_set(0);
    keypad(stdscr, TRUE);
    start_color();

    // Colors
    init_pair(1, COLOR_WHITE, COLOR_BLACK);  // Player
    init_pair(2, COLOR_RED, COLOR_BLACK);    // Monster
    init_pair(3, COLOR_GREEN, COLOR_BLACK);  // Items
    init_pair(4, COLOR_YELLOW, COLOR_BLACK); // Walls

    // Initialize player
    init_player(&game.player);

    // Generate dungeon
    generate_map(&game.map);  // single argument

    // Place monsters
    init_monsters(&game.monsters);  // single argument
}

// Shutdown the game
void shutdown_game() {
    endwin();
}

// Draw the map, player, and monsters
void draw_game() {
    clear();

    draw_map(&game.map);

    // Draw player
    attron(COLOR_PAIR(1));
    mvaddch(game.player.y, game.player.x, '@');
    attroff(COLOR_PAIR(1));

    // Draw monsters
    for (int i = 0; i < game.monsters.count; i++) {
        Monster m = game.monsters.monsters[i];  // changed 'array' to 'monsters'
        attron(COLOR_PAIR(2));
        mvaddch(m.y, m.x, m.symbol);
        attroff(COLOR_PAIR(2));
    }

    refresh();
}

// Process player input
void handle_input(int ch) {
    switch (ch) {
        case KEY_UP:
        case 'w':
            move_player(&game.player, 0, -1);  // remove &game.map
            break;
        case KEY_DOWN:
        case 's':
            move_player(&game.player, 0, 1);
            break;
        case KEY_LEFT:
        case 'a':
            move_player(&game.player, -1, 0);
            break;
        case KEY_RIGHT:
        case 'd':
            move_player(&game.player, 1, 0);
            break;
        case 'q':  // Quit
        case 27:   // ESC key
            game.running = 0;
            break;
        default:
            break;
    }
}

// Main game loop
void game_loop() {
    game.running = 1;

    while (game.running) {
        draw_game();

        int ch = getch();
        handle_input(ch);

        // Update monsters
        move_monsters(&game.monsters);  // changed function name and arguments
    }
}