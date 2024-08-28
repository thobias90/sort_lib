# Definir a versão mínima requerida do CMake
cmake_minimum_required(VERSION 3.12)

# Definir o nome do projeto
project(example-app)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
  main.cpp
)

# Criar o executável
add_executable(${PROJECT_NAME} ${SOURCES})

include(FetchContent)
FetchContent_Declare(
  sort-lib
  SOURCE_DIR ../
)
FetchContent_MakeAvailable(sort-lib)
target_link_libraries(${PROJECT_NAME} PUBLIC sort-lib)