#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, X;

    printf("Input the 1st number: ");
    scanf("%d", &a);

    printf("Input the 2nd number: ");
    scanf("%d", &b);

    printf("Input the 3rd number: ");
    scanf("%d", &c);

    X = a + b + c;
    printf("The sum of three numbers is: %d\n", X);

    return 0;
}
