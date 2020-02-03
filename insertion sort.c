//arrange array elements in sorted order using insertion sort 
#include<stdio.h>
int main()
{
    int n,a[100],i,j,temp,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i;j>0&&temp<a[j-1];j--)  
        {
            a[j]=a[j-1];
           
        }
        a[j]=temp;
        }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}