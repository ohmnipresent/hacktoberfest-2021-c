#include <stdio.h>
int main() 
{
    int n, originalN, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &n);
    originalN = n;

    while (originalN != 0) {
       
        remainder = originalN % 10;
        
       result += remainder * remainder * remainder;
        
       
       originalN /= 10;
    }

    if (result == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);

    return 0;
}