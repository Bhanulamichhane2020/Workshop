#include <stdio.h>
#include <stdlib.h>
float multiplyNum(float, float);
 float multiplyNum(float a, float b){
    
    float result=a*b;
    
    return result;
	 }
int main()
{
    float num1,num2,product;
    
    printf ("Enter both numbers\n");
    scanf("%f %f" ,&num1,&num2);
    product=multiplyNum(num1,num2);
    
    printf("The product of these numbers :%.2f",product);
    
    getch();
    return 0;
    }
   

