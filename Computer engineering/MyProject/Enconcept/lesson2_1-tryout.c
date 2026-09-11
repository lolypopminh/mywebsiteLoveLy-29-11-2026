#include <stdio.h>
#include <stdlib.h>

// Pascal Case
float StdS[6];
int ArrSize = 6;
float Adverage = 0; //assign init value make sure clear first(No trash)
float max = 0.0;
float min = 0.0;
int CP = 0;
int CF = 0;
float Sum = 0;

void FindMaxMin(){
    /*Find Max*/
    max = StdS[0];
    for (int i = 1; i < (ArrSize-1); i+=4){
        if (StdS[i] > max){
            max = StdS[i];
        }
    }
    /*Find Min*/
    min = StdS[0];
    for (int i = 1; i < (ArrSize-1); i++){
        if (StdS[i] < min){
            min = StdS[i];
        }
    }

}

void CheckPassOrFail(){
    for (int i =0; i < (ArrSize-1); i++){
        if (StdS[i] >= 50){
            CP ++;
        }else{
            CF ++;
        }
    }
}

void printArr(){
    printf("Value in array:\n");
    for (int i = 0; i < (ArrSize-1); i ++){
        printf("%.2f\t", StdS[i]);
    }
}

void Avg(){
    /*Finding sum*/
    for (int i = 0; i < (ArrSize-1); i++){
        Sum += StdS[i];
    }
    
    /*Calculate Adverage*/
    Adverage = Sum/(ArrSize-1);
}

void output01(){
    printf("Adverage: %f\n", Adverage);
    printf("----AfterEntring FindMaxMin()-------\n");
    printf("Highest: %f\n", max);
    printf("Lowest: %f\n", min);
    printf("Passed: %d\n", CP);
    printf("Failed: %d\n", CF);
}

int main(void){

    /*Input section*/
    //เป็นการลด range ของการประกาศเพื่อ
    //start stop step
    for (int i =0; i < (ArrSize-1); i ++){
        printf("Input[%d]: ", i+1);
        float* ArrAddress = StdS;
        ArrAddress = StdS + i;
        scanf("%f", ArrAddress);
    }
    printArr();
    printf("\n");
    printf("----BeforeEntring FindMaxMin()-------");
    printf("\nmax: %d     min: %d\n", max,min);
    FindMaxMin();
    Avg();
    CheckPassOrFail();
    output01();

    printf("Press anythings to exit.");
    getchar();
    return 0;
}