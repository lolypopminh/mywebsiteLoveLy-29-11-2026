//input 3 num
//process multipy
//output

#include <stdio.h>

int main(void){
    int arr[3];
    int sum = 1;
    for (int i = 0; i<3; i++){
        printf("Enter number %d : ", i+1);
        scanf("%d", &arr[i]);
        sum *= arr[i];
    }
    printf("res= %d",sum);

    return 0;
}