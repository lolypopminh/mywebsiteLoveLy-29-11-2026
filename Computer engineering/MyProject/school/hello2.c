#include <stdio.h>

void hello(int n, char *name){
    for (int i = 0; i <n; i ++){
        printf("%2d) Hello, %s.\n", i +1, name);
    }
}

void hello1(int n, char *name){
    int i = 0;
    while(i < n){
        printf("%2d) Hello, %s.\n", i +1, name);
        i ++;
    }
}

int hello2(int n, char *name, int i){
    if (n <= 0){
        return 1;
    }else{
        printf("%2d) Hello, %s.\n", i + 1, name);
        i ++;
        n = 1 + hello2(n - 1, name, i);
        return n;
    }
}

int main(void){
    int n;
    char *name = "KunToto";
    //char * name = "Piyawat"

    printf("Enter a positive interger");
    scanf("%d", &n);
    printf("hello\n");
    hello(n, name);
    printf("hello1\n");
    hello1(n, name);
    printf("hello2\n");
    hello2(n, name, 0);

    return 0;
}