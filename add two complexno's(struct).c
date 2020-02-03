#include <stdio.h>
#include<string.h>
struct comp
{
    float r1;
    float img;
}c1,c2;
int main()
{
   printf("\n enter the real and imaginary part of first no:");
   scanf("%f%f",&c1.r1,&c1.img);
   printf("\n enter the real and imaginary part of second no:");
   scanf("%f%f",&c2.r1,&c2.img);
   printf("\n the first no:%.f+i%.f",c1.r1,c1.img);
   printf("\n the second no:%.f+i%.f",c2.r1,c2.img);
   printf("\n the result is:%.f+i%.f",(c1.r1+c2.r1),(c1.img+c2.img));
   return 0;
}