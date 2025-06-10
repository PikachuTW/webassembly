#include<emscripten.h>
#include<math.h>

EMSCRIPTEN_KEEPALIVE
long long factorial(int n){
    long long ans = 1;
    for(int i = 1;i <= n;i++){
        ans*=i;
    }    
    return ans;
}

EMSCRIPTEN_KEEPALIVE
int isPrime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    
    int sqrt_n = (int)sqrt(n);
    for (int i = 3; i <= sqrt_n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

EMSCRIPTEN_KEEPALIVE
int countPrimes(int limit) {
    int count = 0;
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) count++;
    }
    return count;
}

EMSCRIPTEN_KEEPALIVE
long long fibonacciRecursive(int n) {
    if (n <= 1) return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

EMSCRIPTEN_KEEPALIVE
double matrixMultiplication(int size) {
    double sum = 0.0;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                double a = (double)(i + j + 1) / (double)(size);
                double b = (double)(j + k + 1) / (double)(size);
                sum += a * b;
            }
        }
    }
    return sum;
}