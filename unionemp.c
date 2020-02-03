#include <stdio.h>
#include<string.h>
union emp
{
    char ename[10];
    int eid;
    float esal;
}e;
int main()
{
    printf("\n EMPLOYEE DETAILS:");
    strcpy(e.ename,"uday");
    printf("\n name:%s",e.ename);
    e.esal=247500;
    printf("\n salary:%.2f",e.esal);
    e.eid=56;
    printf("\n id:%d",e.eid);
    return 0;
}