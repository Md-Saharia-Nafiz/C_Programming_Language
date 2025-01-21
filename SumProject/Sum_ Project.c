#include<stdio.h>

int main()
{
   int a,b,c;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter value of c: ");
    scanf("%d", &c);

    printf("\n");


    printf("Addition of %d,%d,%d is : %d \n", a,b,c, (a+b+c));

    printf("Addition of %d,%d,%d is : %d \n", a,b,c, (a+b-c));

    printf("Addition of %d,%d,%d is : %d \n", a,b,c, (a+b*c));

    printf("Addition of %d,%d,%d is : %d \n", a,b,c, (a*b*c));

    printf("Addition of %d,%d,%d is : %d \n", a,b,c, (a-b+c));

    printf("Addition of %d,%d,%d is : %d \n", a,b,c, (a-b*c));

    printf("Addition of %d,%d,%d is : %d \n", a,b,c, (a-b-c));

    printf("Addition of %d,%d,%d is : %d \n", a,b,c, (a*b/c));

    printf("Addition of %d,%d,%d is : %d \n", a,b,c, (a/b/c));

    printf("Addition of %d,%d,%d is : %d", a,b,c, (a/b+c));
	
	printf("Addition of %d,%d,%d is : %d", a,b,c, (a/b-c));


    return 0;
}
