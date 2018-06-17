#include <stdio.h>
#include <iostream>

int fact(int n){
  if (n == 0) return 1;
  return n * fact(n - 1);
}

int main() {
  int n = 0;

  std::cin >> n;
  std::cout << "Factrial of " << n << " is " << fact(n) << std::endl;

}
