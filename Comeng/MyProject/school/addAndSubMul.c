/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void print_mat(int *a, int row, int col) {
    for (int i=0; i<row; i++) {
        for (int j=0; j<col;j++){
            printf("%3d", *(a+i*col+j));
        }
        printf("\n");
    }
}
void add_mat1(int *a, int *b, int row, int col) {
    int c[3][3];
    for (int i=0; i<row; i++) {
        for (int j=0; j<col;j++){
            c[i][j] = *(a+i*col+j)+*(b+i*col+j);
        }
    }
    print_mat(&c[0][0], 3, 3);
}

int *add_mat2(int *a, int *b, int row, int col) {
    int *p = (int*)malloc(row*col*sizeof(int));
    for (int i=0; i<row; i++) {
        for (int j=0; j<col;j++){
            *(p+i*col+j) = *(a+i*col+j)+*(b+i*col+j);
        }
    }
    return p;
}

int *mult_mat1(int *a, int *b, int row, int col) {
    int *p = (int*)malloc(row*col*sizeof(int));
    int total = 0;
    for (int i=0; i<row; i++) {
        for (int j=0; j<col;j++){
            for (int k=0; k<row; k++){
                total += *(a+i*col+k)*(*(b+k*col+j));
            }
            *(p+i*col+j) = total;
            total = 0;
        }
    }
    return p;
}


int main() {
  	int a[3][3] = {{1,2,3},{8,1,-2},{2,-4,0}};
  	int b[3][3] = {{1,5,2},{2,9,0},{0,6,1}};
  	
//   	for (int i = 0; i<3; i++) {
//   	    for (int j=0;j<3;j++)
//   	        printf("%4d", a[i][j]);
//   	    printf("\n");
//   	}
//   	printf("\n");

  	print_mat(&a[0][0], 3, 3);
  	printf("\n");
  	print_mat(&b[0][0], 3, 3);
  	printf("\n");
  	add_mat1(&a[0][0], &b[0][0], 3, 3);
  	printf("\n");
  	int *c = add_mat2(&a[0][0], &b[0][0], 3, 3);
  	print_mat(c, 3, 3);
  	printf("\n");
  	c = mult_mat1(&a[0][0], &b[0][0], 3, 3);
    
    // int m[5] = {1, 2, 3, 4, 5};
    // int *p = &m[0];
    // for (int i=0;i<sizeof(m)/sizeof(int);i++)
    //     printf("%d ", m[i]);
    // printf("\n");
    // for (int i=0;i<sizeof(m)/sizeof(int);i++)
    //     printf("%d ", *(p+i));
    
  	
  	
    return 0;
}