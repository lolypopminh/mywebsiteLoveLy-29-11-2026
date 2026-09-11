
#include <stdio.h>


int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    return a / b;
}


int main(){
    printf("Select an operator (+ or -): \n");
    char op = '-';
    
    //ประกาศตัวแปรสำหรับเก็บ address funciton
    int (*fptr)(int, int);

    if (op == '+')
        fptr = &add;
    else if (op == '-')
        //your turn here
        fptr = &sub;
    else if (op == '*')
        fptr = &mul;
    else if (op == '/')
        fptr = &div;

    printf("fptr = [%p]\n", fptr);

    printf("result = %d\n", fptr(10, 5));
    return 0;
}