#include <iostream>
using namespace std;

int fib_cache[100];

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    if (fib_cache[n] != -1)
        return fib_cache[n];

    fib_cache[n] = fib(n - 1) + fib(n - 2);
    return fib_cache[n];
}

int main() {
    for (int i = 0; i < 100; i++)
        fib_cache[i] = -1;

    cout << fib(10);   
    return 0;
}
