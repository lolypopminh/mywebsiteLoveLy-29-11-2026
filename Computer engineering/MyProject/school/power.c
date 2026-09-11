/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int power(int x, int y){
    if (y==0){
        return 1;
    }else{
        return x * power(x,y-1);
    }
}

int main(void){
    int n2;
    for (int i = 0; i <= 10; i ++){
        n2 = 1;
        for (int j =0; j<i; j++){
            n2 = n2 * 2;
        }
        printf("2^%d:%d \n", i ,n2);
    
        // printf("2^%d:%d \n", i , power(2,i));
    }
    // printf("%d\n", power(2,10));
    return 0;
}