#pragma once

#include <stdlib.h>
#include <time.h>

// Initialize random number generator
void init_random();

// Generate a random integer in range [min, max]
int rand_range(int min, int max);

// Simple clamp function
int clamp(int value, int min, int max);