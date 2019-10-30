#!/bin/bash

{
    cmake --build ./build
    ./build/pacman
} || {
    ./build.sh
    cmake --build ./build
    ./build/pacman
}
