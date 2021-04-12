#include <stdio.h>
#include <stdlib.h>
int addNum(int , int);//function declaration or prototype
int main()
{
int num1,num2,sum;//variable declaration
printf("Enter the First number : ");
scanf("%d", &num1);
printf("Enter the Second number : ");
scanf("%d", &num2);//taking two number as input from user
sum=addNum(num1,num2);//calling the function
//The sum value (returned by the function) is stored in sum variable.
printf("The Sum of two number is :%d",sum);
//display the sum value
getch();
return 0;
}
int addNum(int a, int b)//defining function based in declaration
{
int result=a+b;//find sum of two numbers
//and result stored in result variable
return result;//returning result
}
