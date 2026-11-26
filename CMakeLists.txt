cmake_minimum_required(VERSION 3.16)
project(GuessQuest LANGUAGES CXX)

add_executable(guessquest
    src/main.cpp
    src/game.cpp
    src/random.cpp
)
target_include_directories(guessquest PRIVATE include)
target_compile_features(guessquest PRIVATE cxx_std_17)
