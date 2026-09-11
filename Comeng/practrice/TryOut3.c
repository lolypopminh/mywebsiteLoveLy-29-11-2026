#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void upper(char *a, long int * n){
    for (int i = 0; i < n; i++){
        if (*(a+i) >= 'a' && *(a+i) <= 'z'){
            *(a+i) = *(a+i) - ('a'- 'A');
        }
    }
}

void demo1(){
    char flower[] = "tulip";
    long int n = sizeof(flower)/sizeof(char);
    printf("size of  array = %ld\n", n);
    printf("flower (address = %p)\n", flower);
    upper(flower, (long int*)n);
    printf("value of var flower = %s", &flower[0]);

}

void demo2(){
    char *planet = "Mercury";
    printf("%s\n", planet);
    int n = sizeof(planet)/sizeof(char);
    for(int i = 0; i <n; i++){
        printf("address[%d] of *var planet = %p\n", i,(planet + i));
    }
}

int INT_n_to_Base(int n, int base, char result[]){
    int i = 0;

    while (n > 0) {
        int rem = n % base;

        if (rem < 10)
            result[i++] = rem + '0';
        else
            result[i++] = rem - 10 + 'A';   // สำหรับฐาน 16

        n /= base;
    }

    // กลับลำดับ
    for (int j = 0; j < i / 2; j++) {
        char temp = result[j];
        result[j] = result[i - 1 - j];
        result[i - 1 - j] = temp;
    }

    result[i] = '\0';

    return i;
}

int main(void){
    char str[100];
    printf("Enter your number: ");
    scanf("%s", &str);

    INT_n_to_Base(10, 2, str);
    printf("%s\n", str);

    INT_n_to_Base(10, 16, str);
    printf("%s\n", str);
}