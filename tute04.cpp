/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>
#include<iomanip>
int Factorial(int no);
int nCr(int n, int r);
using namespace std;
int main() {
  int n, r,factorial,answer;
  cout << "Enter a value for n: ";
  cin >> n;
 cout << "Enter a value for r: ";
  cin >> r;
  factorial = Factorial(n);
  cout << "Factorial is:"<<factorial<<endl;
  answer = nCr(n,r);
  cout << "The answer for the second function is:"<<setiosflags(ios::fixed)<<answer<<endl;
  return 0;
}
int Factorial(int no)
{
  int fac;
  fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r; //factorial found
    }
  return fac;

}
int nCr(int n, int r)
{
  int fac,facto,factor,q;
  float ans;
  fac = 1;
    for (int n; n >= 1; n--) {
        fac = fac * n; //factorial found
    }
    facto = 1;
     for (int r; r >= 1; r--) {
        facto = facto * r; //factorial found
    }
    factor = 1;
    q = n - r;
    for (int q; q >= 1; q--) {
        factor = factor * q;
    }
    ans = fac / (facto * factor);
    return ans;
}
