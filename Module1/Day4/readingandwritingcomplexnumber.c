#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

void readComplex(Complex *c);
void writeComplex(Complex c);
Complex addComplex(Complex c1, Complex c2);
Complex multiplyComplex(Complex c1, Complex c2);

int main() {
    Complex c1, c2, sum, product;

    printf("Enter the first complex number:\n");
    readComplex(&c1);

    printf("Enter the second complex number:\n");
    readComplex(&c2);

    printf("\nFirst complex number: ");
    writeComplex(c1);
    printf("\nSecond complex number: ");
    writeComplex(c2);

    sum = addComplex(c1, c2);
    printf("\nSum of the two complex numbers: ");
    writeComplex(sum);

    product = multiplyComplex(c1, c2);
    printf("\nProduct of the two complex numbers: ");
    writeComplex(product);

    return 0;
}
//function to read complex number and taking input complex number from user...
void readComplex(Complex *c) {
    printf("Enter the real part: ");
    scanf("%f", &(c->real));
    printf("Enter the imaginary part: ");
    scanf("%f", &(c->imag));
}

void writeComplex(Complex c) {
    if (c.imag >= 0) {
        printf("%.2f + %.2fi", c.real, c.imag);
    } else {
        printf("%.2f - %.2fi", c.real, -c.imag);
    }
}

Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

Complex multiplyComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}
