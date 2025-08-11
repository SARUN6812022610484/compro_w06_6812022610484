#include <stdio.h>

int main() {
    printf("หัวข้อ: ลำดับการประเมินผลของนิพจน์ (Order of Evaluation in c Expressions)\n\n");

    int A = -2 + 5 * 2;
    printf("A = -2 + 5 * 2;\n");
    printf("    วิธีคิด: -2 + (5 * 2) = -2 + 10 = %d\n",A);
    printf("    ผลลัพธ์: A = %d\n\n",A);

    int B = 10 / 2 * 3;
    printf("B = 10 / 2 * 3;\n");
    printf("    วิธีคิด: (10 / 2) * 3 = 5 * 3 = %d\n",B);
    printf("    ผลลัพธ์: B = %d\n\n",B);

    int C = 6 / 2 + 3 * (4 % 2);
    printf("C = 6 / 2 + 3 * (4 %% 2);\n");
    printf("    วิธีคิด: 6 / 2 + 3 * (0) = 3 + 0 = %d\n",C);
    printf("    ผลลัพธ์: C = %d\n\n",C);

    int D = (5 + 2) * 15 % 4;
    printf("D = (5 + 2) * 15 %% 4;\n");
    printf("    วิธีคิด: (7) * 15 %% 4 = 105 %% 4 = %d\n",D);
    printf("    ผลลัพธ์: D = %d\n\n",D);

    int E = 6 + 2 * 2 - 6 / 2;
    printf("E = 6 + 2 * 2 - 6 / 2;\n");
    printf("    วิธีคิด: 6 + (2 * 2) - (6 / 2) = 6 + 4 -3 = 10 - 3 = %d\n",E);
    printf("    ผลลัพธ์: E = %d\n\n",E);

    int F = 5 + 3 * 2 + 8 / 4 + (6 % 5);
    printf("F = 5 + 3 * 2 + 8 / 4 + (6 %% 5);\n");
    printf("    วิธีคิด: 5 + (3 * 2) - (8 / 4) + (6 %% 5) = 5 + 6 - 2 + 1 = 11 - 2 + 1 = 9 + 1 = %d\n",F);
    printf("    ผลลัพธ์: F = %d\n\n",F);

    int G = (4 + 3) * 2 - 10 / (2 + 3);
    printf("G = (4 + 3) * 2 - 10 / (2 + 3);\n");
    printf("    วิธีคิด: (7) * 2 - 10 / (5) = 14 - 2 = %d\n",G);
    printf("    ผลลัพธ์: G = %d\n\n",G); 
   
    return 0 ;

}

