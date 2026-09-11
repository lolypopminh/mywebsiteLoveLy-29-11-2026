#include <stdio.h>
#include <stdlib.h>


int* findmaxmin(int* addArray, int Mlen){
    int max,min;
    static int arrayMN[2];
    int* ptr;

    max = addArray[0];
    for (int i = 1; i<Mlen; i++){
        ptr = &addArray[i];
        if (*ptr > max){
            max = *ptr;
        }
    }
    arrayMN[0] = max;

    min = addArray[0];
    for (int i = 1; i < Mlen; i++){
        
        ptr = &addArray[i];
        if (*ptr < min){
            min = *ptr;
        }
    }
    arrayMN[1] = min;

    return arrayMN;
}

void printArray(int* arr, int Mlen){
    int outPut;
    for (int i = 0; i < Mlen;i++){
        outPut = *(arr + i);
        printf("%d\t", outPut);
    }
}

int InMetr(int* metr, int len){
    for (int i = 0; i < len; i + 4){
        printf("Enter metric[%d][%d]");
        scanf("%d", metr + (i *(sizeof(int))));
    }

    //Brrow API error code for this case;
    return 200;
}

int main(){
    int intLength = 10;
    int arr[intLength];
    int sum = 0;
    int* arrAddress;
    int Mlen = sizeof(arr) / sizeof(int);
    int* addressOfArray = arr;

    for (int i = 0; i < Mlen; i++){
        printf("Enter %d number: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
        printf("%d\n", arr[i]);
    }
    
    
    printf("Array[%d]: ", Mlen);
    arrAddress = findmaxmin(addressOfArray, Mlen);
    
    printArray(arr,Mlen);
    printf("\n");
    printf("Sum = %d\n", sum);
    printf("Max = %d\n", *arrAddress);
    printf("Min = %d\n", *(arrAddress+1));

    return 0;
}