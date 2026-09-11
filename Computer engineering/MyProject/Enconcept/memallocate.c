#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

void init_RandTime(int timeStamp){
    srand(timeStamp);
}

void main(){
    int a = 10;
    int *ptr = &a;
    int **ptr1 = &ptr;
    printf("%d\n", **ptr1);
    printf("%d\n", *ptr1);
    printf("%d\n", &a);
}