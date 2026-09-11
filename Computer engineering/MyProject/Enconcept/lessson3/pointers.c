#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int myAge = 43;

    int* pnr = NULL;   // -- null pointer --
    printf("The memory address in pnr = %p\n\n", pnr);

    void* ptr;         // -- void pointer --
                       // the pointer that can point to the variable with any data types
    ptr = &myAge;
    printf("1. The memory address in ptr = %p\n", ptr); 
    printf("1. The value of the address that ptr points to = %d\n", *(int*) ptr);

    *(int*) ptr = 26;
    printf("2. The memory address in ptr = %p\n", ptr); 
    printf("2. The value of the address that ptr points to = %d\n\n", *(int*) ptr);

    int* pwr;         // -- wild pointer --
                      // the pointer that can point to the variable with one specific data type
                      // it can contain null or some memory address based on the compilation times
    printf("The memory address in pwr = %p\n\n", pwr); 

    int* pzr = (int*) malloc(sizeof(int));
    printf("1. The memory address in pzr = %p\n", pzr);
    printf("1. The value of the address that pzr points to = %d\n", *(int*) pzr);     // it has been initialized as zero
    free(pzr);
    printf("2. The memory address in pzr = %p\n", pzr); 
    printf("2. The value of the address that pzr points to = %d\n\n", *(int*) pzr);     // it contains garbage data instead
    // pzr = NULL;    // Without executing this line, pzr becomes a "dangling pointer"


    int (*fptr) (int, int);        // -- Function pointer --
    fptr = &add;
    printf("The memory address in fptr = %p \n", fptr);
    printf("The value returned from add() = %d \n\n", fptr(18, 59));
    
    
    int *p;                        // -- Multi-level pointer --
    int **q;
    printf("1. The memory address in p = %p\n", p); 
    printf("1. The memory address in q = %p\n", q);
    
    p = &myAge;                    // p points to myAge
    q = &p;                        // q points to p
    printf("2. The memory address in p = %p\n", p); 
    printf("2. The memory address in q = %p\n", q);
    printf("2. The memory address that q points to = %p\n", *q);
    printf("2. The value of address that q points to = %d\n\n", **q);
     
    return 0;
}