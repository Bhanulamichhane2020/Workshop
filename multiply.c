#include <stdio.h>
#include <stdlib.h>
int multiplyNum(int , int);
int main()
{
int num1,num2,product;
printf("Enter the First number :");
scanf("%d", &num1);
printf("Enter the Second number : ");
scanf("%d", &num2);
product=multiplyNum(num1,num2);
printf("The product of these numbers :%d",product);
getch();
return 0;
}
int multiplyNum(int a, int b)
{
int result=a*b;
return result;
}
