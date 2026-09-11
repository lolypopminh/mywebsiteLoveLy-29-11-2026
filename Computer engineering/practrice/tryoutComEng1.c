#include <stdio.h>

// int main() {
    
//     int arr[] = {2, 4, 8, 12, 16, 18};
//     //a best practice for finding len like in python
//     int n = sizeof(arr)/sizeof(int);

//     // Printing array elements
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

int main(){
    // int var = 10;
    // int* ptr= &var;
    // printf("%p", ptr);
    int *p;

    {
        int x = 5;
        p = &x; //value->address-> p
    }
    printf("%d", *p);
    

    return 0;
}