#include <stdio.h>  
// เรียกใช้ไลบรารีมาตรฐานสำหรับการแสดงผลทางหน้าจอ เช่น printf()

int main() {  
    // ฟังก์ชันหลักของโปรแกรมที่ใช้เริ่มต้นการทำงาน

    char name = 'J';         
    // ประกาศตัวแปรชนิด character (ตัวอักษร) ชื่อ name และกำหนดค่าเป็น 'J' (ตัวอักษรแรกของชื่อเล่น)

    int age = 20;            
    // ประกาศตัวแปรชนิดจำนวนเต็มชื่อ age และกำหนดค่าเป็น 20 (อายุของเรา)

    float weight = 55.5;     
    // ประกาศตัวแปรชนิดทศนิยมชื่อ weight และกำหนดค่าเป็น 55.5 (น้ำหนักของเรา)

    printf("Student %c is %d years old.\n", name, age);  
    // แสดงผลชื่อและอายุในบรรทัดแรก
    // %c แทนค่าตัวอักษร, %d แทนค่าจำนวนเต็ม
    // \n คือขึ้นบรรทัดใหม่

    printf("His weighs is %.1f kg.\n", weight);  
    // แสดงผลน้ำหนักในบรรทัดที่สอง
    // %.1f คือแสดงเลขทศนิยม 1 ตำแหน่ง

    return 0;  
    // ส่งค่ากลับ 0 เพื่อบอกว่าโปรแกรมทำงานเสร็จสมบูรณ์

}