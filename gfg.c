/*
Use swig to transcribe the modules
from C++ to python
*/

#include <stdio.h>
#include <math.h>

//Call our header file here:

//Ref: https://www.geeksforgeeks.org/wrapping-cc-python-using-swig-set-1/
#include "gfg.h"
#define ll long long

double myvar = 3.4;
//calculaif the factorial
ll int factorial(ll int n)
{
  if (n<=1)
    return 1;
  else
    return (n*factorial(n-1));
}

//find mod
int my_mod(int n, int m)
{
  return (n%m);
}
