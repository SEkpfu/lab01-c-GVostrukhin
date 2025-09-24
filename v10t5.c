#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    
    printf("Введите значение x: ");
    scanf("%lf", &x);
    printf("Введите значение y: ");
    scanf("%lf", &y);
    
    double left1 = log(fabs(cos(x)));
    double right1 = 3 + exp(y - 1);
    double result1 = left1 - right1; 
    
    double left2 = log(1 + x*x);
    double right2 = 1 + x*x * fabs(y - tan(x));
    double result2 = left2 - right2; 
    
    printf("Первое выражение: %+.*f\n", 5, result1);
    
    printf("Второе выражение: %+.*e\n", 5, result2);
    
    return 0;
}