//anagram program
#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int i,j,a[26]={0},b[26]={0},flag=0;
    scanf("%s%s",str1,str2);
    for(i=0;str1[i]!='\0';i++)
    {
        a[str1[i]- 'a']++;
    }
    for(i=0;str2[i]!='\0';i++)
    {
        b[str2[i]- 'a']++;
    }
    for(j=0;j<26;j++)
    {
        if(a[j]!=b[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("anagram");
    else
    printf("not an anagram");
    return 0;
}