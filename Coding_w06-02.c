#include <stdio.h>

int main(){
    int i = 1, j = 2, k; //กำหนดตัวแปรจำนวนเต็ม
    printf(" 1: i = %d, j = %d, k = k(ยังไม่ได้กำหนดค่า)\n", i, j);

    k = i + j; 
    printf(" 2: i = %d, j = %d, k = %d\n", i, j, k);

    i = i + (k * j); 
    printf(" 3: i = %d, j = %d, k = %d\n", i, j, k);

    j = i / 2; 
    printf(" 4: i = %d, j = %d, k = %d\n", i, j, k);

    k = i % 2; 
    printf(" 5: i = %d, j = %d, k = %d\n", i, j, k);

    j = (j + k) * 3; 
    printf(" 6: i = %d, j = %d, k = %d\n", i, j, k);

    printf("ตารางที่ 2 \n");//แสดงตารางที่ 2

    double x = 1.0, y = 2.0, z;//กำหนดตัวแปร x = 1.0, y = 2.0, z (ไม่ได้กำหนด)
    printf(" 1: x = %.1f, y = %.1f, z = z(ยังไม่ได้กำหนดค่า)\n", x, y);

    x = y + 5.0;
    printf(" 2: x = %.1f, y = %.1f, z = z(ยังไม่ได้กำหนดค่า)\n", x, y);

    y = x / 2.0;
    printf(" 3: x = %.1f, y = %.1f, z = z(ยังไม่ได้กำหนดค่า)\n", x, y);

    y = (x * 3.0) + 4.0;
    printf(" 4: x = %.1f, y = %.1f, z = z(ยังไม่ได้กำหนดค่า)\n", x, y);

    x = -0.5 - y;
    printf(" 5: x = %.1f, y = %.1f, z = z(ยังไม่ได้กำหนดค่า)\n", x, y);

    z = x + y;
    printf(" 6: x = %.1f, y = %.1f, z = %.1f\n", x, y, z);

    return 0 ;
}