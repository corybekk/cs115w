// Title : Four 4s Problem
// Author : Cory Bekker
// Date : 9 September 2010
// Description : This program uses the Four 4s problem to introduce C++ 
//               expressions

#include <iostream>
#include <cmath>

using namespace std;

int factorial (int p)
{
  int f = 1;
  for (int i = 2; i <= p; i++)
    f *= i;   
  return f;
}

int main ()
{
  cout << "sqrt(4) * 4 / (4 + 4) = " << sqrt(4) * 4 / (4 + 4) << endl;
  cout << "factorial(4) / factorial(4) + 4/4 = " << factorial(4) / factorial(4) + 4/4 << endl; 
   
  return 0;
}

