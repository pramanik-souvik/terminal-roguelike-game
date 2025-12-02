#pragma once

#define MAP_WIDTH  40
#define MAP_HEIGHT 20

typedef enum {
    TILE_FLOOR,
    TILE_WALL
} TileType;

typedef struct {
    TileType tiles[MAP_HEIGHT][MAP_WIDTH];
} Map;

void generate_map(Map *map);
void draw_map(const Map *map);