#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Введите три целых числа: ");
    scanf("%d %d %d", &a, &b, &c);
    
    (a * c > 100) ? 
        printf("Наибольшее число: %d\n", 
               (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c)) : 
        printf("Квадраты чисел: %d %d %d\n", a*a, b*b, c*c);
    
    return 0;
}