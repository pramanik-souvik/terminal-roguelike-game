#include "utils.h"

void init_random() {
    srand((unsigned int)time(NULL));
}

int rand_range(int min, int max) {
    if (max < min) return min;
    return min + rand() % (max - min + 1);
}

int clamp(int value, int min, int max) {
    if (value < min) return min;
    if (value > max) return max;
    return value;
}