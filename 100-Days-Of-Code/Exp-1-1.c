#include <stdio.h>

struct ComplexNumber {
    float real;
    float imag;
};

struct ComplexNumber readComplex() {
    struct ComplexNumber c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

void writeComplex(struct ComplexNumber c) {
    if (c.imag >= 0) {
        printf("%.2f + %.2fi", c.real, c.imag);
    } else {
        printf("%.2f - %.2fi", c.real, c.imag * -1);
    }
}

struct ComplexNumber addComplex(struct ComplexNumber c1, struct ComplexNumber c2) {
    struct ComplexNumber sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    return sum;
}

struct ComplexNumber subtractComplex(struct ComplexNumber c1, struct ComplexNumber c2) {
    struct ComplexNumber diff;
    diff.real = c1.real - c2.real;
    diff.imag = c1.imag - c2.imag;
    return diff;
}

int main() {
    struct ComplexNumber num1, num2, sum, difference;

    printf("--- Complex Number Operations ---\n");

    printf("Enter details for Complex Number 1:\n");
    num1 = readComplex();

    printf("\nEnter details for Complex Number 2:\n");
    num2 = readComplex();

    printf("\nFirst Complex Number: ");
    writeComplex(num1);
    printf("\nSecond Complex Number: ");
    writeComplex(num2);

    sum = addComplex(num1, num2);
    printf("\n\nSum (Z1 + Z2): ");
    writeComplex(sum);

    difference = subtractComplex(num1, num2);
    printf("\nDifference (Z1 - Z2): ");
    writeComplex(difference);

    printf("\n");

    return 0;
}
