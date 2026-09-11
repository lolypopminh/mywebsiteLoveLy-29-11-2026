#include <stdio.h>
//you need to import

int main(void){
    int arr[] = {73,32,44,6,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for (int i=0; i <n; i ++){
        printf("%d\n", arr[i]);
    }
    pintf("\n");
    return 0;
}