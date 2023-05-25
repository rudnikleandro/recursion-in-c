#include <stdio.h>

int main(void)
{
    int n = 0;
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n >= 1)
    {
        fact = n * fact;
        n--;
    }

    printf ("Factorial is: %d\n", fact);

    return 0;
}