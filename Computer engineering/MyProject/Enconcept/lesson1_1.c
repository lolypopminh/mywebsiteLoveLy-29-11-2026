#include <stdio.h>

// function ที่ return address หรือ ที่อยู่ใน memory ของตัวแปร ชนิด integer
int* CountOddOrEven(int num1, int num2, int num3, int num4, int num5){
    int count_odd  = 0;
    int count_even = 0;
    static int arr[2];    // static ทำให้ตัวแปรนี้ยังคงค้างอยู่ใน memory ต่อไป แม้ว่า function นี้จะทำงานเสร็จสมบูรณ์แล้ว

    if (num1%2 == 1) {
        count_odd++;
    } else {
        count_even++;
    }
    
    if (num2%2 == 1) {
        count_odd++;
    } else {
        count_even++;
    }
    
    if (num3%2 == 1) {
        count_odd++;
    } else {
        count_even++;
    }
    
    if (num4%2 == 1) {
        count_odd++;
    } else {
        count_even++;
    }
    
    if (num5%2 == 1) {
        count_odd++;
    } else {
        count_even++;
    }

    arr[0] = count_odd;
    arr[1] = count_even;
    
    printf("-- address of arr[0] = %p\n",  (arr + 0));   // address ของ arr บวกกับ integer size*0 = address ของ arr ที่ index 0 หรือ address เดิม
    printf("-- value of arr[0]   = %d\n", *(arr + 0));
    printf("-- address of arr[1] = %p\n",  (arr + 1));   // address ของ arr บวกกับ integer size*1 = address ของ arr ที่ index 1 (ขยับจากเดิมไป 4 byte)
    printf("-- value of arr[1]   = %d\n", *(arr + 1));

    // ส่ง address ของตัวแปร arr ที่ index = 0 หรือ address ที่ตัวแรกของ array กลับออกไป
    return arr;
}


int main()
{
    int num1, num2, num3, num4, num5;
    int COdd; int CEven;
    printf("Enter number #1: ");
    scanf("%d", &num1);
    printf("Enter number #2: ");
    scanf("%d", &num2);
    printf("Enter number #3: ");
    scanf("%d", &num3);
    printf("Enter number #4: ");
    scanf("%d", &num4);
    printf("Enter number #5: ");
    scanf("%d", &num5);
    
    int* arrAddress = CountOddOrEven(num1,num2,num3,num4,num5);  // arrAddress = &arr[0];
    COdd  = arrAddress[0];  // ค่า value ของ arr ตัวแรก ที่ index = 0
    CEven = arrAddress[1];  // ค่า value ของ arr ตัวถัดมาที่ index = 1
    printf("ResultCOdd = %d\nResultCEven = %d\n", COdd, CEven);
    
    printf("arrAddress = %p\n", arrAddress); 
    printf("&arrAddress[0] = %p\n", &arrAddress[0]);            // address ของ arr[0]   
    // 2 บรรทัดด้านบนนี้ได้ผลลัพธ์เหมือนกัน

    printf("&arrAddress[1] = %p\n", &arrAddress[1]);            // address ของ arr[1]

    printf("-- arrAddress + 1    = %p\n",  (arrAddress + 1));   // address ที่เก็บอยู่ใน arrayAddress บวกกับ integer size*1 = address ของ arrayAddress ที่ index 1
    printf("-- *(arrAddress + 1) = %d\n", *(arrAddress + 1));   // value ของตัวแปร arrayAddress ที่ index 1
    return 0;
}

// ** ส่วนที่มีการใช้ a + i*sizeof(int) จะเป็นการใช้ในกรณีจองพื้นที่ใน memory
// ตามจำนวน size ของ data type ที่เรากำหนด เช่น int *arr = malloc(10 * sizeof(int));