//Largest among three number
#include <stdio.h>
#include <stdlib.h>
biggestNumber(int,int,int);
int biggestNumber(int a,int b,int c)
{
    int biggest;
if(a>b && a>c)
    biggest=a;
else if(b>a && b>c)
    biggest=b;
else
    biggest=c;
return biggest;
}
int main()
{
    int a,b,c;
    printf("Enter the first numbers :\n");
    scanf("%d",&a);
    printf("Enter the second  numbers :\n");
    scanf("%d", &b);
    printf("Enter the third number :\n");
     scanf("%d",&c);
    int result=biggestNumber(a,b,c);
    printf("Biggest number is: %d\n",result);

    getch();
    return 0;
}
