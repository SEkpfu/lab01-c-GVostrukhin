#include <stdio.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, ""); 
double a, b, s; 
printf("Введите длины сторон \n"); 
printf("a= ");  
scanf("%lf", &a); 
printf("b= ");  
scanf("%lf", &b);  
s = a * b; 
printf("S = %lf", s); 
return 0;
}