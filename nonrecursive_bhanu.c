//Using non recursive  method to find the sum of five digit number
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,num,num1,num2,num3,sum=0,c=0;
      do{
      	printf("Enter 5 digit positive integer:");
	  scanf("%d",&num); num3=num;
      for(;num3>0;num3/=10)
	  c++;	
      }
	  while(c!=5);
	  
	num1=num;
	for(i=0;i<5;i++)
	{
		num2=num1%10;
		num1=num1/10;
		sum=sum+num2;
	}
	printf("Sum of 5 digit non recursive:%d",sum);
	return 0;
}
