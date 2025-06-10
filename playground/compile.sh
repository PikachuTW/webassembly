#!/bin/bash

emcc main.c -o main.wasm \
    -O3 \
    -ffast-math \
    --no-entry \
    -s EXPORTED_FUNCTIONS='["_factorial","_isPrime","_countPrimes","_fibonacciRecursive","_matrixMultiplication"]' \
    -s ALLOW_MEMORY_GROWTH=1 \
