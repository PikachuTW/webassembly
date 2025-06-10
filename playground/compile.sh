#!/bin/bash

emcc main.c -o main.wasm \
    -O3 \
    -ffast-math \
    --no-entry \
    -s ALLOW_MEMORY_GROWTH=1 \
