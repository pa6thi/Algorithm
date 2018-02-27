
sTASH Removed this line

#include <stdio.h>
#include <math.h>
long long convertDecimalToBinary(int n);

int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("%d in decimal = %lld in binary", n, convertDecimalToBinary(n));
    return 0;
}

long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, remainder, n/2);
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}

long decimalToBinary(long n) {
    int remainder; 
 long binary = 0, i = 1;
  
    while(n != 0) {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
    return binary;
}
