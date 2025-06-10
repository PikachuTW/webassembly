#!/bin/bash

emcc main.c -o main.wasm \
    -O3 \
    --no-entry \
    -s EXPORTED_FUNCTIONS='["_factorial","_isPrime","_countPrimes","_fibonacciRecursive","_matrixMultiplication","_numericalIntegration"]' \
    -s EXPORTED_RUNTIME_METHODS='["ccall","cwrap"]' \
