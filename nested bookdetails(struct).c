#include <stdio.h>
struct book
{
    char title[100];
    int pages;
    float price;
    struct dop
    {
        int dd;
        int mm;
        int yyyy;
    }d;
}b;
int main()
{
    printf("enter title,pages,price of the book");
    scanf("%s%d%f",b.title,&b.pages,&b.price);
    printf("enter the date of publishing");
    scanf("%d%d%d",&b.d.dd,&b.d.mm,&b.d.yyyy);
    printf("\n BOOK DETAILS \n");
    printf("\n title:%s",b.title);
    printf("\n pages:%d",b.pages);
    printf("\n price:%.2f",b.price);
    printf("\n dop:%d-%d-%d",b.d.dd,b.d.mm,b.d.yyyy);
    return 0;
}