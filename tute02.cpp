/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include<iostream>
using namespace std;

int main()
{
  
  double salary;
  double netSalary;
  int etype;                          //define variables
  int otHrs;
  int otRate;
  

  
  cout << "Enter Employee Type : "; //
  cin >> etype;

  cout << "Enter Salary : ";
  cin >> salary;                      //getting user inputs

  cout << "Enter OT Hours : ";
  cin >> otHrs;
    
  switch (etype)  
    {
      case 1 : otRate = 1000;
      break;

      case 2 : otRate = 1500;        // creating statements
      break;

      default : otRate = 1700;
      break;
    }
  
  netSalary = salary + (otHrs * otRate);  //calculation for net salary

  cout << "Net Salary is " << netSalary;  // print net salary

  return 0;  //end of the process
  
}


