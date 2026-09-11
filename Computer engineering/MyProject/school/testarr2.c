#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//you need to import


//ยังไม่เข้าใจ
void init_random_seed(){
    srand(time(NULL));  //เอาเวลา ณ ตอนนั้น
}


int find_max(int *arr, int n){  //??ยังไม่เข้าใจ
    //initiallize
    int max = arr[0], trNb = 0;

    for (int j = 1; j <n; j ++){
        if (arr[j] > max){
            max = arr[j];
            trNb = j;
        }
    }

    return trNb;
}

int mySort(int *arr, int n){
    int tmp,p;
    p = n;
    for (int i = 0; i<= n ; i++){
        p = find_max(&arr[i], n -1);
        //printf("i = %d, &arr[%d]=%p, n-1=%d,p=%d arr[%d]=%d, |",
        //    i, i, &arr[i], n-i,p,p,arr[i+p]);

        //หยิบมาแทนตำแหน่ง i แล้ว i แทนตำแหน่ง p
        tmp = arr[i];
        arr[i] = arr[i+p];
        arr[i+p] = tmp;
        //print_array(arr, 0);
    }
}

int myrand(){
    int min=1, max= 100;
    int range = max-min-1;
    int random_num = (rand()%range) +min;
    return random_num;
}

int *init__array(int n){
    int *a = (int *)malloc(n*sizeof(int));
    init_random_seed();
    for (int i = 0; i<n; i++){
        a[i] = myrand();
    }
    return a;
}

void print_array(int * a, int n){
    for (int i = 0; i <n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter the number of cards: ");
    scanf("%d", &n);
    int* arr = init__array(n);
    print_array(arr, n);
    mySort(arr, n);
    print_array(arr,n);

    return 0;
}
// int main(void){
//     //int arr[] = {73,32, 200,44,6,19,99};
//     int arr[] = {73,32,44,6,19};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     //printf("arr=%p, arr[0]=%p\n", arr, &arr[0]);
//     //printf("arr= %p, arr[0]=%p\n", arr, &arr[0]);
//         //print_array(arr,n);
//     //printf("%d", arr);
//     //printf("max %d\n", arr[find_max(arr,n)]);

//     //เห็นไหมได้ผลลัพธ์เหมือนกัน
//     // print_array(arr, n);
//      print_array(&arr[0], n);

//     return 0;
// }