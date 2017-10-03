#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int convert(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec % 2 + 10 * convert(dec / 2));
    }
}

int main ()
{
char buffer[16] = "<some ";
int convert();
char str[20];
gets(str);
int place = atoi(str);
int g=convert(place);

sprintf(buffer, "%d", g);
printf("%s",buffer);
return 0;
}

