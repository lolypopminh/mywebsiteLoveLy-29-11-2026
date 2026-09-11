#include <stdio.h>
#include <stdlib.h>
int selectMode(){
    static int m;
    printf("1. USD\n2. EUR\n3. JPY\n");
    printf("Please selected the mode>>");
    scanf("%d", &m);

    return m;
}

float toUSD(float THB){
    int usd = THB / 33.38;

    return usd;
}

float toEUR(float THB){
    int eur = THB / 38.43;

    return eur;
}

float toJPY(float THB){
    int jpy = THB / 0.2126;

    return jpy;
}

int main(){
    int (*fptr)();
    float inTHB = 0.0;
    int m;
    printf("Enter number in THB>>");
    scanf("%f", &inTHB);
    fptr = &selectMode;
    m = fptr();
    
    float (*ffptr)(float);
    
    char *pre = "";
    float res = 0.0;
    int i = 0;
    do{
        switch(m){
            case 1:
                ffptr = &toUSD;
                res = ffptr(inTHB);
                pre = "USD";
                break;
            case 2:
                ffptr = &toEUR;
                res = ffptr(inTHB);
                pre = "EUR";
                break;
            case 3:
                ffptr = &toJPY;
                res = ffptr(inTHB);
                pre = "THB";
                break;
            default:
                printf("Invalid Mode\n");
                i = 1;
                break;
        }
    }
    while(i == 1);
    printf("Result %.3f %s", res, pre);


    return 0;
}