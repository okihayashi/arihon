#include <iostream>
#include <math.h>

int memo[INT_MAX];

int fib(int n) {
  if (n <= 1) return n;
  if (memo[n] != 0) return memo[n];
  return memo[n] = fib(n - 1) + fib(n - 2);
}

int main() {
  int n;

  std::cin >> n;
  std::cout << n << "-th item of Fibonacci is " << fib(n) << std::endl;

}
