#include <stdio.h>

int main() {
    char name[31];      // ชื่อ (string ขนาดไม่เกิน 30)
    int age;
    float height;

    char subject[31];   // ชื่อวิชา (string)
    float grade;
    char symbol;

    // รับข้อมูลบรรทัดที่ 1
    scanf("%s %d %f", name, &age, &height);

    // รับข้อมูลบรรทัดที่ 2
    scanf("%s %f %c", subject, &grade, &symbol);

    // แสดงผลตามรูปแบบที่ต้องการ
    printf("%c is %d years old and %.1f centimeters tall.\n", name[0], age, height);
    printf("In subject %s, %c got %.2f which is symbolized as '%c'.\n", subject, name[0], grade, symbol);

    return 0;
}
