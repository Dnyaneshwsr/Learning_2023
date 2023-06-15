#include <stdio.h>

void swap(void *a, void *b, size_t size) {
    char temp[size];
    
    // Copy the data from 'a' to 'temp'
    char *a_ptr = (char *)a;
    char *temp_ptr = temp;
    for (size_t i = 0; i < size; i++) {
        *temp_ptr++ = *a_ptr++;
    }
    
    // Copy the data from 'b' to 'a'
    char *b_ptr = (char *)b;
    a_ptr = (char *)a;
    for (size_t i = 0; i < size; i++) {
        *a_ptr++ = *b_ptr++;
    }
    
    // Copy the data from 'temp' to 'b'
    temp_ptr = temp;
    b_ptr = (char *)b;
    for (size_t i = 0; i < size; i++) {
        *b_ptr++ = *temp_ptr++;
    }
}

int main() {
    int a = 5;
    int b = 10;
    
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swap: a = %d, b = %d\n", a, b);
    
    double c = 2.5;
    double d = 3.7;
    
    printf("Before swap: c = %lf, d = %lf\n", c, d);
    swap(&c, &d, sizeof(double));
    printf("After swap: c = %lf, d = %lf\n", c, d);
    
    return 0;
}
