#include <stdio.h>
#include <stdlib.h>
int subtractNum(int , int);
int main()
{
int num1,num2,subtract;
printf("Enter the First number :");
scanf("%d", &num1);
printf("Enter the Second number : ");
scanf("%d", &num2);
subtract=subtractNum(num1,num2);
printf("The subtraction of these two number is :%d",subtract);

getch();
return 0;
}
int subtractNum(int a, int b)
{
int result=a-b;
return result;
}
