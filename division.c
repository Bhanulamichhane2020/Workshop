#include <stdio.h>
//To calculate simple interest
#include <stdlib.h>
int divisionNum(int , int);
int main()
{
int principal,time,rate,interest;
printf("Enter the principal :");
scanf("%d", &principal);
printf("Enter the time : ");
scanf("%d", &time);
printf("Enter the rate : ");
scanf("%d", &rate);
interest=interestSum(principal,time,rate);
printf("The interest is :%d",interest);

getch();
return 0;
}
int interestSum(int p, int t, int r)
{
int result=(p*t*r)/100;
return result;
}
