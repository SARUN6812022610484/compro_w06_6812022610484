#include <stdio.h>

int main(){
    printf("หัวข้อ: การเขียนนิพจน์ในรูปย่อ (short-hand Expression)\n\n");

    double x = 100.0; //กำหนดค่าตัวแปร
    int y = 7;
    int z = 3;
    int a = 2;
    double total = 500.0;
    double price = 100.0;
    int quantity = 5;
    double discount = 20.0;
    double rate = 5.0;
    double score = 85.0;
    double penalty = 2.0;
    int mistake = 3;

    printf(" 1. x = x - 4.0;\n");
    double x_full_1 = x;  //สร้างตัวแปรเเบบเต็ม
    double x_short_1 = x; //สร้างตัวแปรแบบย่อ

    x_full_1 = x_full_1 - 4.0;
    printf("  แบบเต็ม (x = x - 4.0;): x = %.2f\n", x_full_1);

    x_short_1 -= 4.0;
    printf("  แบบย่อ (x -= 4.0;):    x = %.2f\n", x_short_1);

    if (x_full_1 == x_short_1) {
        printf("    ผลลัพธ์เท่ากัน: True\n\n");
    } else {
        printf("    ผลลัพธ์เท่ากัน: False\n\n");
    }

    printf(" 2. x = 6.5 * x;\n");
    double x_full_2 = x_full_2;
    double x_short_2 = x;

    x_full_2 = 6.5 * x_full_2;
    printf("   แบบเต็ม (x = 6.5 * x;): x = %.2f\n", x_full_2);

    x_short_2 *= 6.5;
    printf("   แบบย่อ (x *= 6.5;):    x = %.2f\n", x_short_2);

    if (x_full_2 == x_short_2) {
        printf("   ผลลัพธ์เท่าัน: True\n\n");
    } else {
        printf("   ผลลัพธ์เท่ากัน: False\n\n");
    }
    
    printf(" 3. x = x %% (y + z * a); \n");
    int x_int_full_3 = (int)x;
    int x_int_short_3 = (int)x;
    int divisor_3 = y + z * a;

    x_int_full_3 = x_int_full_3 % divisor_3;
    printf("   แบบเต็ม (x = x %% (y + z * a);): x = %d (เมื่อ x เริ่มต้นเป็น %d)\n", x_int_full_3, (int)x);

    x_int_short_3 %= divisor_3;
    printf("   แบบย่อ (x %%= (y + z * a);):     x = %d\n", x_int_short_3);
    if (x_int_full_3 == x_int_short_3) {
        printf("    ผลลัพธ์เท่ากัน: True\n\n");
    } else {
        printf("    ผลลัพธ์เท่ากัน: False\n\n");
    }

    printf(" 4. x = x / (2.0 * x); \n");
    double x_full_4 = x;
    double x_short_4 = x;
    double divisor_4 = 2.0 * x;

    if (divisor_4 == 0) {
        printf("    ไม่สามารถหารด้วยศูนย์ได้ใน Expression นี้\n\n");
    } else {
        x_full_4 = x_full_4 / divisor_4;
        printf("    แบบเต็ม (x = x / (2.0 * x);): x = %.4f\n", x_full_4);

        x_short_4 /= divisor_4;
        printf("    แบบย่อ (x /= (2.0 * x);):     x = %.4f\n", x_short_4);

        if(x_full_4 == x_short_4) {
            printf("   ผลลัพธ์เท่ากัน: True\n\n");
        } else {
            printf("   ผลลัพธ์เท่ากัน: False\n\n");
        }
    }

    printf(" 5. total = total + (price * quantity - discount); \n");
    double total_full_5 = total;
    double total_short_5 = total;
    double value_to_add_5 = (price * quantity - discount);

    total_full_5 = total_full_5 + value_to_add_5;
    printf("   แบบเต็ม (total = total + (...);): total = %.2f\n", total_full_5);
    
    total_short_5 += value_to_add_5;
    printf("   แบบย่อ (total += (...);):         total = %.2f\n", total_short_5);
    
    if (total_full_5 == total_short_5) {
        printf("    ผลลัพธ์เท่ากัน: True\n\n");
    } else {
        printf("    ผลลัพธ์เท่ากัน: False\n\n");
    }

    printf(" 6. x = x * (1 + rate / 100); \n");
    double x_full_6 = x;
    double x_short_6 = x;
    double factor_6 = (1 + rate / 100.0);

    x_full_6 = x_full_6 * factor_6;
    printf("    แบบเต็ม (x = x * (...);): x = %.2f\n", x_full_6);

    x_short_6 *= factor_6;
    printf("    แบบย่อ (x *= (...);):     x = %.2f\n", x_short_6);

    if (x_full_6 == x_short_6) {
        printf("    ผลลัพธ์เท่ากัน: True\n\n");
    } else {
        printf("    ผลลัพธ์เท่ากัน: False\n\n");
    }

    printf(" 7. score = score - (penalty * (mistake + 1)); \n");
    double score_full_7 = score;
    double score_short_7 = score;
    double deduction_7 = (penalty * (mistake + 1)); 

    score_full_7 = score_full_7 - deduction_7;
    printf("    แบบเต็ม (score = score - (...);): score = %.2f\n", score_full_7);

    score_short_7 -= deduction_7;
    printf("    แบบย่อ (score -= (...);):         score = %.2f\n", score_short_7);

    if (score_full_7 == score) {
        printf("    ผลลัพธ์เท่ากัน: True\n\n");
    } else {
        printf("    ผลลัพธ์เท่ากัน: False\n\n");
    }

    return 0 ;
}
