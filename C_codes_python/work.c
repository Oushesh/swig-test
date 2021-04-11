/*
Using c codes in python|Set 1
*/
#include <math.h>

int gcd(int x, int y)
{
  int g=y;
  while (x>0)
  {
    g=x;
    x=y%x;
    y=g;
  }
  return g;
}

int divide(int a, int b, int * remainder)
{
  int quot = a/b;
  *remainder = a%b;
  return quot;
}

double avg(double *a, int n)
{
  double total = 0.0;
  for (int i=0;i<n;i++)
  {
    total = a[i];
  }
  return total/n;
}

typdef struct Point
{
  double x,y;
}
Point;

double distance(Point *p1, Point *p2)
{
  return hypot(p1->x-p2->x,p1->y-p2->y);
}


//Take the code and compile it into a library.
//Link to other code.
a
