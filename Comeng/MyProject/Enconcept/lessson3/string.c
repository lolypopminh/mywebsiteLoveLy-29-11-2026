#include <stdio.h>

int main() {
    
    char arr[5] = "text";
    char* ptr = arr;
    
    printf("ptr[0] = %c\n", ptr[0]);
    printf("value of the address that ptr points to = %s\n", ptr);
    printf("address that ptr points to = %p\n", ptr);
    printf("address of arr at index 0 = %p\n", &arr[0]);
    printf("address of ptr (itself) = %p\n", &ptr);

    return 0;
}