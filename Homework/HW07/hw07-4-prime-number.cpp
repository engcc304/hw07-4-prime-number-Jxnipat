/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)
    
    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/
#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter number:\n");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Invalid input. Please enter a positive integer greater than 1.\n");
        return 1; // Exit with an error code
    }

    printf("Output:\n");

    int num = n - 1;
    do {
        if (is_prime(num)) {
            printf("%d ", num);
        }
        num--;
    } while (num >= 2);

    printf("\n");

    return 0; // Exit successfully
}
