# Terminal Roguelike Game

🎮 A simple, terminal-based roguelike game written in C using `ncurses`.  
Explore randomly generated dungeons, fight monsters, and survive as long as you can!  

---

## Features

- Procedurally generated dungeon maps
- ASCII graphics with colors using `ncurses`
- Player movement and turn-based mechanics
- Basic monster AI with random movement
- Expandable: inventory, combat, and more can be added
- Cross-platform terminal support

---

## Getting Started

### Prerequisites

- GCC (or compatible C compiler)
- `ncurses` library

On Ubuntu/Debian:

```bash
sudo apt-get install build-essential libncurses5-dev libncursesw5-dev
```

On MacOS

```bash
brew install ncurses
```

## Build 

```bash
git clone <https://github.com/pramanik-souvik/terminal-roguelike-game.git>
cd terminal-roguelike
make
```
This will compile the project into the `roguelike` executable.

## Run

```bash
./roguelike
```

### Controls:

- Arrow Keys or WASD → Move

- Q or ESC → Quit the game

## Project Structure

```
terminal-roguelike/
├── include/        # Header files
├── src/            # Source code
├── assets/         # Game assets (if any)
├── save/           # Save files
├── obj/            # Object files (build output)
├── Makefile
└── README.md
```

## Concepts Demonstrated 🧠

- Procedural generation algorithms
- Terminal graphics using `ncurses`
- Structs and arrays for game state
- Randomized monster AI
- Turn-based mechanics
- Simple game loop and input handling in C

## Future Enhancements

- Multiple monster types with different AI
- Inventory system and item pickups
- Fog of war and exploration mechanics
- Combat system with health, attack, and defense
- Saving/loading dungeon states


# Author

Created by Souvik Pramanik

Inspired by classic roguelikes such as Rogue and NetHack
