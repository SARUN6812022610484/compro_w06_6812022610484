#include <stdio.h>

int main(){//ประกาศตัวแปร
    int a = 5;
    int b = 17;
    float c = 8.5;
    float d = 4.0;

    printf("บรรทัดที่ 1: ค่าเริ่มต้นของตัวแปร:\n");//แสดงค่าเริ่มต้นของตัวแปร
    printf(" a = %d\n",a );
    printf(" b = %d\n",b );
    printf(" c = %.1f\n",c );
    printf(" d = %.1f\n",d );
    printf("------------------------------\n");


double result_d_plus_a = d + a;//เอา d บวกกับ a แล้วบันทึกผลลัพธ์ไว้
printf("บรรทัดที่ 2: d + a = %.1f\n",result_d_plus_a);
printf("------------------------------\n");

int result_a_minus_b = a - b;//ลบค่าb ออกจาก a
printf("บรรทัดที่ 3: a - b = %d\n",result_a_minus_b);
printf("------------------------------\n");

double result_c_times_d = c * d;//คูณเลขทศนิยม
printf("บรรทัดที่ 4: c * d = %.1f\n",result_c_times_d);
printf("------------------------------\n");

double result_a_times_c = a * c;//คูณเลขจำนวนเต็มกับทศนิยม
printf("บรรทัดที่ 5: a * c = %.1f\n",result_a_times_c);
printf("------------------------------\n");

int result_c_div_d = c / d;//หารเลขทศนิยม
printf("บรรทัดที่ 6: c / d = %.3f\n",result_c_div_d);
printf("------------------------------\n");

double result_b_div_c = (double)b / c;//แปลง b เป็นทศนิยก่อนหาร
printf("บรรทัดที่ 7: b / c = %.3f\n",result_b_div_c);
printf("------------------------------\n");

double result_a_mod_b = a % b;//หารเอาเศษ 
printf("บรรทัดที่ 8: a %% b = %d\n",result_a_mod_b);
printf("------------------------------\n");

printf("บรรทัดที่ 9: ใช้ %% ไม่ได้ เพราะ c เป็นเลขทศนิยม\n");//หารเอาเศษของเลขทศนิยม ทำไม่ได้ต้องใช้ fmod() แทน
printf("------------------------------\n");

printf("บรรทัดที่ 10: ใช้ %% ไม่ได้ เพราะทั้ง c และ d เป็นเลขทศนิยม\n");
printf("------------------------------\n");

return 0 ;
}