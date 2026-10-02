// Documentation
/**
 * file: demo.cpp
 * author: ADITYA KUMAR
 * Date: 2026-02-10
 * Description: A simple demonstration file
 */

 //Link
 #include <iostream>

 // Definition
 #define x 20

 // Global Declaration
 int sum(int y);

 //Main () Function
 int main(void)
 {
    int y = 55;
    printf("sum: %d\n", sum(y));
    return 0;
 }

 // Subprogram
 int sum(int y)
 {
    return x + y;
 }