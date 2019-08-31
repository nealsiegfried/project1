#include <stdio.h>
#include <math.h>
int main()
{

   double doubleArray[] = {18, 43, 12, 89, 6, 22, 56, 91, 102, 40};
   double sumOfSqrts;
   double averageSqrt;
    int i = 0;

   for (i; i < 10; i++) {
      sumOfSqrts += sqrt(doubleArray[i]);
   }

   averageSqrt = sumOfSqrts / 10;

   printf("%f", averageSqrt);
   return 0;
}
