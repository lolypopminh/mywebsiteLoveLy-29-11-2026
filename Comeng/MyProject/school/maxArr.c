#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_random_seed(){
    srand(time(NULL)); 
}

int myrand(){
    int min = 1, max = 150;
    return (rand() % (max - min + 1)) + min;
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    init_random_seed(); 
    
    int n = 10;        
    int arr[10];       
    

    for (int i = 0; i < n; i++) {
        arr[i] = myrand();
    }
    
    printf("Original Random array:\n");
    print_array(arr, n);
    
    // Selection Sort (Small to Big)
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i; 
        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[min_idx]) {
                min_idx = j; 
            }
        }
        
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    
    printf("\nSorted array (BIG TO Small):\n");
    print_array(arr, n);
    
    return 0;
}