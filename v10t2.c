#include <stdio.h>

int main() {
    int number;
    
    printf("Введите целое число, большее 999: ");
    scanf("%d", &number);
    
    if (number <= 999) {
        printf("Ошибка: число должно быть больше 999!\n");
        return 1;
    }
    
    int last_digit = number % 10;         
    int hundreds_digit = (number / 100) % 10; 
    int thousands = number / 1000;         
    int remainder = number % 100;

    int result = thousands * 1000 +        
                 last_digit * 100 +        
                 remainder % 10;           
    
    printf("\nИсходное число: %d\n", number);
    printf("Цифра сотен: %d\n", hundreds_digit);
    printf("Последняя цифра: %d\n", last_digit);
    printf("Результат: %d\n", result);
    
    return 0;
}