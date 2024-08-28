# Build directory
BUILD_DIR := build

# Example directory
EXAMPLE_DIR := example

# Target executable
TARGET := $(BUILD_DIR)/example_main

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(EXAMPLE_DIR)/CMakeLists.txt
	mkdir -p $(BUILD_DIR)
	cd $(BUILD_DIR) && cmake ../$(EXAMPLE_DIR) && make

clean:
	rm -rf $(BUILD_DIR)