/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
int main()
{
int no; //define variables
  long fac= 1;
  int r;

  cout << "Enter a number : ";   // user inputs
  cin >> no;

  for(r = no ; r >= 1 ; r--)  // creating loop
    {
      fac = fac * r;
    }
  
cout << "Factorial of " << no << " is " << fac << endl;  // print Factorial
  
  return 0;
}
    
  


   

