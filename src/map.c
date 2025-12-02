#include "map.h"
#include <stdlib.h>
#include <ncurses.h>

void generate_map(Map *map) {
    for (int y = 0; y < MAP_HEIGHT; y++) {
        for (int x = 0; x < MAP_WIDTH; x++) {
            if (x == 0 || y == 0 || x == MAP_WIDTH-1 || y == MAP_HEIGHT-1)
                map->tiles[y][x] = TILE_WALL;
            else
                map->tiles[y][x] = TILE_FLOOR;
        }
    }
}

void draw_map(const Map *map) {
    for (int y = 0; y < MAP_HEIGHT; y++) {
        for (int x = 0; x < MAP_WIDTH; x++) {
            switch (map->tiles[y][x]) {
                case TILE_WALL:
                    mvaddch(y, x, '#');
                    break;
                case TILE_FLOOR:
                    mvaddch(y, x, '.');
                    break;
            }
        }
    }
}