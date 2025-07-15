#include <stdio.h>   // รวมฟังก์ชัน printf และอื่น ๆ จากมาตรฐาน C

int main() {
    char nameInitial = 'Film';           // ใช้ char เก็บตัวอักษร
    int age = 18;                     // ใช้ int สำหรับจำนวนเต็ม เช่น อายุ
    float weight = 45;              // ใช้ float สำหรับเลขทศนิยม
    char gender[] = "male";         // ใช้ array of char สำหรับข้อความ (string)

    // แสดงผลค่าทั้งหมด
    printf("nameInitial = %c\n", nameInitial);  
    printf("age = %d\n", age);              
    printf("weight = %.1f\n", weight);       
    printf("gender = %s\n", gender);         

    return 0;  // ส่งค่ากลับ 0 แสดงว่าโปรแกรมจบการทำงานปกติ
}
