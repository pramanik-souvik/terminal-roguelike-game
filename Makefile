CC = gcc
CFLAGS = -Wall -Wextra -g -Iinclude
LDFLAGS = -lncurses

SRCDIR = src
OBJDIR = obj
TARGET = roguelike

SRC = $(wildcard $(SRCDIR)/*.c)
OBJ = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRC))

# Default target
all: $(TARGET)

# Link executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

# Compile object files
$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Create object directory if it doesn't exist
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Clean build files
clean:
	rm -rf $(OBJDIR) $(TARGET)

.PHONY: all clean