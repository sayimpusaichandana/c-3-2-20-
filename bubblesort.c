//arrange array elements in sorted order using bubble sort
#include<stdio.h>
int main()
{
    int n,a[100],i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)  
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}