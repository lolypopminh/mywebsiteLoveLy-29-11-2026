#include <stdio.h>

int* CountOdd(){
    static int w = 6;
    return &w;
}

int main()
{
    int* wAddress = CountOdd();
    printf("%p\n", wAddress);   // address ของตัวแปร w
    printf("%p\n", &wAddress);  // address ของตัวแปร wAddress
    printf("%d\n", *wAddress);  // value ของ w
    return 0;
}