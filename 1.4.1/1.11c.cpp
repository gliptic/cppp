#include <iostream>

/*
 * Exercise 1.11: Write a program that prompts the user for two integers.
 * Print each number in the range specified by those two integers.
 */

int main() {
  int a, b, direction;

  std::cout << "Gib 2 ints:" << std::endl;
  std::cin >> a >> b;

  // book didn't taught me ifs nor abs() yet...
  //
  direction = (a < b) - (a > b);
  while (a != b) {
    std::cout << a << " ";
    a += direction;
  }

  std::cout << b << std::endl;

  return 0;
}
