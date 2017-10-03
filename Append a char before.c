#include <stdio.h>
#include<string.h>

int main()
{
    char a[20];
    gets(a);
    char d[10];
    int i=0,j=0;
    
    for(i=0;i<=strlen(a);i++)
    {
       if(a[i]=='<' | a[i]=='>' | a[i]=='\\')
       {
           d[j]='\\';
           j++;
       }
       d[j]=a[i];
       j++;
    }
     printf("%s",d);
    

    return 0;
