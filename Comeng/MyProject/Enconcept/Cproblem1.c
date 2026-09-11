#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calc(int sum, int C){
    float avg = 0.0;
    avg = sum/C;

    return avg;
}

int main(){
    int count = 0;
    int (*fcalc) (int,int);
    float avg = 0.0;
    fcalc = &calc;
    int* ptr = (int*)malloc(sizeof(int)); int Sum = 0;
    while (!(*ptr == 0)){
        printf("Input >>");
        scanf("%d", ptr);
        printf("ptr=%d\n", *ptr);
        if (!(*ptr == 0))
            Sum += *ptr;
        count ++;
    }
    avg = fcalc(Sum,count);
    printf("Average=%f", avg);

    free(ptr);
    ptr = NULL;
    return 0;
}