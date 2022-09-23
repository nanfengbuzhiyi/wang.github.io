#include<stdio.h>
#include"x2x.h"
#include"x2y.h"
int main()
{
   int a=4;
   int b=2;
   float c=add(a,b);
   float d=sub(a,b);
   printf("%f\n",c);
   printf("%f\n",d);
   return 0;
}
