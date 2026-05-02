# --- Compiler and Flags ---
CXX      := g++
CXXFLAGS := -Wall -Wextra -std=c++17 -Iinclude
LDFLAGS  := 

# --- Directories and Files ---
SRC_DIR  := src
OBJ_DIR  := obj
TARGET   := aoe_vil_simulation

# Automatically find all .cpp files in src/
SRCS     := $(wildcard $(SRC_DIR)/*.cpp)
# Convert those .cpp paths to .o paths in the obj/ directory
OBJS     := $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

# --- Build Rules ---

# Default target
all: $(TARGET)

# Link the executable
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $@ $(LDFLAGS)

# Compile source files to object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create the obj directory if it doesn't exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Clean up build artifacts
clean:
	rm -rf $(OBJ_DIR) $(TARGET)

.PHONY: all clean

