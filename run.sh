#!/bin/bash

{
    cmake --build ./build
    ./build/damas
} || {
    ./build.sh
    cmake --build ./build
    ./build/damas
}
