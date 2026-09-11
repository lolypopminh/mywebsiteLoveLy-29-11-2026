#include <stdio.h>
#include <stdlib.h>


//example of prototype funciton pointer
// int (*c)(int,int,int,int);


void add_mat(int *a, int*b, int row, int col){
    for (int i =0; i<row; i++){
        for(int j =0; j <col; j ++){
            printf("%3d", *(a+i*col+j) + *(b+i*col+j));
        }
        printf("\n");
    }
}

int *add_mat2(int *a, int*b, int row, int col){
    int *p = (int*)malloc(row*col*sizeof(int));
    for (int i =0; i<row; i++){
        for(int j =0; j <col; j ++){
            /*ต้องแถวที่เท่าไร * แต่ล่ะแถวมีกี่ column(อย่างลืม่วาเริ่มที่ 0 ถ้าเริ่มที่หนึ่งต้องแถม index ++ ไป)
            ส่วน column ก็แล้วแต่ว่าเอา column ไหน ถ้าเป็นคอรั่มที่ 0 ก็บวกไปคือไม่ได้ขยับอยู่ที่เติ่มเพราะถูกต้องแล้ว ถ้าต้องการคอรั่มที่ 1 ก็บวกไป
            แล้วก็จะได้คอรั่มที่ต้องการอย่างถูกต้อง ซึ่งพอเอาเลขมารวมกันแล้วเป็นผลรวมเราจะได้เป็นตำแหน่งที่ cpu มองใน 1 มิติ*/
            *(p+i*col+j) = *(a+i*col+j) + *(b+i*col+j);
        }
        //printf("\n");
    }
    return p;
}   

int *minu_mat(int *a, int*b, int row, int col){
    int *p = (int*)malloc(row*col*sizeof(int));
    for (int i =0; i<row; i++){
        for(int j =0; j <col; j ++){
            *(p+i*col+j) = *(a+i*col+j) - *(b+i*col+j);
        }
        //printf("\n");
    }
    return p;
}

/* การบ้านทำ function คูณ */

//แสดง array 2 มิติ
void print_mat(int *p, int row, int col){
    for (int i =0; i<row; i++){
        for(int j =0; j <col; j ++){
            printf("%3d", *(p+i*col+j));
        }
        printf("\n");
    }
    //รอบแรกเป็น 

}


int main(void){
    int a[3][3] = {{1,2,-1}, {8,1,-2}, {2,-4,0}};
    int b[3][3] = {{1,5,2}, {2,9,0}, {0,6,1}};

    printf("This is matric A.\n");
    print_mat(&a[0][0],3,3);
    printf("This is matric B.\n");
    print_mat(&b[0][0],3,3);
    printf("\n");

    printf("---------------\n");
    //ต่างกันตรงคำตอบเก็บไวใน pointer c แทนเหมือน a+b ไม่มีการเก็บคำตอบไวในตัวแปรแต่ปริ้นคำตอบออกมาเลย
    //อิงถึงค่า value ที่ได้จากการ return value เก็บเป็น address
    int *c = add_mat2(&a[0][0],&b[0][0],3,3);
    print_mat(c,3,3);
    printf("----------------\n");
    print_mat(c,3,3);
    
    // long int sizeOfa = sizeof(a);
    // printf("sizeof(a) = [%ld]\n", sizeOfa);
    // long int sizeOfb = sizeof(b);
    // printf("sizeof(b) = [%ld]\n", sizeOfb);
    
    
    // for (int i = 0; i <3; i ++){
    //     for (int j = 0; j<3; j++);
    //         printf("%4d", a[i][j]);
    //     printf("\n");
    // }
    // แบบนี้ไม่มีการเก็บในตัวแปรแล้วมาปริ้น แต่ปริ้นใน funciton เลย
    // printf("---------------\n");
    // add_mat(&a[0][0], &b[0][0], 3, 3);
    // int m[5] = {15,11,-7,3,9};
    // int *p = &m[0];
    // for (int i =0; i <sizeof(m)/sizeof(int); i++)
    //     printf("%d", m[1]);
    // printf("\n");
    // for (int i=0; i < sizeof(m)/ sizeof(int); i ++)
    //     printf("%d", *(p+1));
    // printf("\n");
    
    
    //end program
    return 0;
}