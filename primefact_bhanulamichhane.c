#include<stdio.h>
#include<conio.h>
	void check_prime(int a)
{
   int c; int f=0;
 
   for ( c = 2 ; c <= a-1; c++ )
   { 
      if ( a%c == 0 )
     break;
     else f=1;
	 }
if(f==1)
{
printf("%d ",a);

}
}

void primeCheck(int num)
{
	int i; int f=0;
	for(i=2; i<=num/2; i++)
	{
		if(num%i==0)
		{
			f=1;
			if(i==2)
		printf("2 ");
		else if(i==3)
		printf("3 ");
		else
			check_prime(i);
		}
	}
	if(f==0)
	printf("there is no prime factor");
}
int main()
{
	int n;
	do{
			printf("Enter the  number :");
	        scanf("%d", &n);
	}
	while(n<0);
	if((n==0) ||(n==1))
	{
		printf("No factors");
	}
	
	primeCheck(n);
	getch ();
	return 0;
	
}



