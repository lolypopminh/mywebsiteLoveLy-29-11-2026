#include <stdio.h>


int main(void){
    int a,b;
    float c;
    a = 1;
    b = 3;
    c = a/b;
    char* str = "Toto";
    printf("Hello, world %d / %d = %f\n", a,b,c);
    //'T' จริงๆ คือ 84 %s ตีว่าเป็น address -> หาไม่เจอที่เป็น char!!
    //ได้ address เลย %s อ่านเป็น *char คือเอา address ที่ได้ไปหา value OK เลย
    printf("My name is %c\n", *str);    
    printf("My name is %p \n", str);
    printf("Nice to meet you!\n");
}