# Build directory
BUILD_DIR := build

# Example directory
EXAMPLE_DIR := example

# Target executable
TARGET := $(BUILD_DIR)/example_main

# Unit test directory
UNIT_TEST_DIR := tests

# Unit test executable
UNIT_TEST_TARGET := $(BUILD_DIR)/tests

.PHONY: all clean unit_test

all: $(TARGET)

$(TARGET): $(EXAMPLE_DIR)/CMakeLists.txt
	mkdir -p $(BUILD_DIR)
	cd $(BUILD_DIR) && cmake ../$(EXAMPLE_DIR) && make

unit_test: run_unit_test

# Target to build the project
build_unit_test:
	@echo "Building the project..."
	mkdir -p $(BUILD_DIR)
	cd $(BUILD_DIR) && cmake -DTEST_FRAMEWORK=ON ../tests/

run_unit_test: build_unit_test
	@echo "Running the project..."
	cd $(BUILD_DIR) && cmake --build . && ctest --output-on-failure

clean:
	rm -rf $(BUILD_DIR)