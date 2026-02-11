cmake_minimum_required(VERSION 3.20)

project(cpp_dnd
    VERSION 1.0
    DESCRIPTION "Test project"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(dnd
    main.cpp
    factory/CharacterFactory.cpp
    characters/Character.h
    characters/Wizard.cpp
    characters/Fighter.cpp
    characters/Bard.cpp
    core/DiceRoller.cpp 
    core/Stats.cpp
)