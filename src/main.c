#include "game.h"
#include <ncurses.h>
#include <stdio.h>

int main() {
    // Initialize the game
    init_game();

    // Run the main game loop
    game_loop();

    // Shutdown and cleanup
    shutdown_game();

    printf("Thanks for playing!\n");

    return 0;
}