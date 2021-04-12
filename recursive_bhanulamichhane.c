//to find the sum of five digit positive intiger
#include<stdio.h>
#include<conio.h>

int sum(int);
int main()
{
	int num,result,num3,c=0;
	do{
      	printf("Enter 5 digit positive integer:");
	  scanf("%d",&num); num3=num;
      for(;num3>0;num3/=10)
	  c++;	
      }
	  while(c!=5);
	  
	result=sum(num);
	printf("Sum of 5 digit recursive:%d",result);
	return 0;	
}

int sum(int num)
{
	int result;
	if(num/10==0) return num;
	else
	result=(num%10+sum(num/10));
	return result;
}
