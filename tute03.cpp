/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>

int main(void){

  int no;
  long fac;

  std::cout<<"Enter a numebr: ";
  std::cin>>no;

  fac = 1;
  for (int R=no; R >= 1; R--) {
      fac = fac * R;
  }

  std::cout<<"Factorial of "<<no<<" is "<<fac;
  return  0;
}
