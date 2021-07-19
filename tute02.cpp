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

#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
   double salary, netSalary;
   int type, otHrs, otRate;
   cout<<"Enter Employee Type : ";//requesting for keyboard input of employee type
   cin>>type;
   cout<<"Enter Salary  : ";
  cin>>salary;
   cout<<"Enter OtHrs : ";
   cin>>otHrs;
   
   switch (type) {
      case 1 :
          otRate = 1000; //if type 1 = rate is 1000
          break;
      case 2 :
          otRate = 1500;// if type 2 = rate is 1500
          break;
      case 3:
          otRate = 1700;// if type = 3= rate is 1700
          break;
      default :
        otRate = 0;// else, no overtime rate
   }


   netSalary = salary + otHrs* otRate;
   cout<<"The net salary is:" << setiosflags(ios::fixed)<<setprecision(2)<< netSalary;
  
   return 0;
}
