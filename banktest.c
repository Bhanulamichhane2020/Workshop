//bank
#include<stdio.h>
#include<conio.h>
#define N 5

struct bank {
     int acc_no;
     char name[20];
     int balance;         
	 };

void main() {

struct bank bankName[N];

int i,ca1,lw=100,ca2,accountN,amount;



for(i=0;i<N;i++) 
{ 
printf("Enter the account no.: ");
scanf("%d",&bankName[i].acc_no);

printf("\nEnter the customer name: ");
scanf("%s",&bankName[i].name);

printf("\nEnter the balance: ");
scanf("%d",&bankName[i].balance);
}



printf("\tEnter your choice\n"); 

printf("Press 1 to know whose balance is less than 100.\n\n");
printf("Press 2 to withdraw the balance.\n\n\n");


scanf("%d",&ca1);

switch(ca1) {
case 1:
      disp(&bankName);         
      break;
case 2:
     printf("enter your account number: ");
     scanf("%d",&accountN);

     for(i=0;i<N;i++) {

     if((bankName[i].acc_no)==accountN) {
     printf("%s\n",bankName[i].name);
     printf("\n\n");

     printf("\nEnter 0 or 1 option :\n");
     printf("\n1: Deposite:\n");
     printf("\n0: Withdraw:\n\n");
     scanf("%d",&ca2);

     switch(ca2) {


     case 0:

    

    if(bankName[i].balance<lw) {

    printf("\nBalance is small to withdraw.\n");

    break;
    }

    else {

    printf("\nEnter the amount to withdraw from the bank: ");
    scanf("%d",&amount);

    }

    if(bankName[i].balance<amount) {

    printf("\nDear customer you dont have sufficient amount to withdrawa.\n");


    }


    else {

    bankName[i].balance=bankName[i].balance+amount;

    printf("Money withdrawa was  was successful.\n");

    }
    break;

     case 1:

   printf("\nEnter the  amount to deposite: ");
   scanf("%d",&amount);

   bankName[i].balance=bankName[i].balance+amount;

   printf("\nCash successfully  deposited.\n\n");

   break;

}

}
}
}
 getch();
 }

disp(struct bank *a) {

int p;

printf("The name of customers whose balance is less than 100:\n");

for(p=0;p<N;p++) {

if((a[p].balance)<100) {

printf("%d\t%s\n",a[p].acc_no,a[p].name);

}
}
return 0;

 }

