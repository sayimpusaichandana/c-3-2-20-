//structure sample program
#include <stdio.h>
struct book
{
    char title[100];
    int pages;
    float price;
};
int main()
{
    struct book b;
    printf("\n enter title,pages and price of the book\n");
    scanf("%s%d%f",b.title,&b.pages,&b.price);
    printf("\n BOOK DETAILS ARE\n");
    printf("\nTITLE:%s",b.title);
    printf("\n NO OF PAGES:%d",b.pages);
    printf("\n PRICE:%6.2f",b.price);
    return 0;
}