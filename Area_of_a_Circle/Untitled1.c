#include <stdio.h>

int main() {
    double R, A;
    const double PI = 3.14159;

    // Read the radius of the circle
    scanf("%lf", &R);

    // Calculate the area of the circle
    A = PI * R * R;

    // Print the result with four decimal places
    printf("A=%.4lf\n", A);

    return 0;
}
