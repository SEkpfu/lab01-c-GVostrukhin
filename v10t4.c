#include <stdio.h>

int main() {
    double x;
    
    printf("Введите значение x: ");
    scanf("%lf", &x);
    
    double x2 = x * x;        
    double x4 = x2 * x2;      
    double x5 = x4 * x;       
    double x8 = x4 * x4;      
    double x13 = x8 * x5;     
    
    double temp = x13 - x5;   
    temp = temp + x2;         
    double y = temp - 2;      
    
    printf("y = %.4f\n", y);
    
    return 0;
}