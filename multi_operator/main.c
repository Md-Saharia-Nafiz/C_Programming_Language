#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, x, y;

    printf("Input the 1st number: ");
    scanf("%d", &a);

    printf("Input the 2nd number: ");
    scanf("%d", &b);

    printf("Input the 3rd number: ");
    scanf("%d", &c);

    x = a + c;
    printf("The sum of 1st & 3rd number is: %d\n", x);

    y = x * b;
    printf("The mult of x & 2nd numbers is: %d\n", y);

    return 0;
    //getchar();
}
