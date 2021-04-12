#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
     
     char bookname[40];
     char bookauthor[40];
     int bookaccno;
     int bookprice;
     int flag;
};

int compute(int ch, struct book b[], int count)
{
	int n,i,j;int a;char c[10];
	struct book temp;
	int bno;int p;
     char authorname[40];
     char issue_answer[10];
    
	 switch(ch)
     { 
		        case 1: 
		           printf("\nHow Many Books You Want To Add: ");
                    scanf("%d",&n);
					
                    for(i = count; i < (n+count) ; i++)
					{
                    
                    printf("\nBook Name: ");
                    scanf("%s",b[i].bookname);
                    printf("\nEnter Author Name: ");
                    scanf("%s",b[i].bookauthor);
                    printf("\nAccession Number : ");
                    scanf("%d",&b[i].bookaccno);
                    printf("\nEnter Book Price: ");
                    scanf("%d",&b[i].bookprice);
		    printf("\nCan the book be issued? (Yes/No)");
		    scanf("%s",issue_answer);
		    if(strcmp(issue_answer,"yes") == 0){
			b[i].flag = 0;
		    }
			else{
			b[i].flag = 1;
		    }
                    printf("-------------------------------------\n");
                 };
                 count+=n;
        
                 break;      
                case 2 :
                    printf("\n\t\tDetails of All Book:\n");
                    for(i=0;i<count;i++)
                    {
                         
                         printf("Book Name  %s \n",b[i].bookname);
                         printf("Author : %s\n",b[i].bookauthor);
                         printf("Accession Number : %d\n",b[i].bookaccno);
                         printf("Book Price : %d\n" ,b[i].bookprice);
			 if(b[i].flag == 0){
				printf("The Book can be issued.");
			  }
			  else{
				printf("The Book cannot be issued.");
			  }
                         printf("\n------------------------------------------\n");
                    } break;
                    
                case 3:
                	printf("\nEnter Author Name: ");
                    scanf("%s",authorname);
                    printf("\n\nBooks of the given author:.\n\n");
                    for( i = 0 ; i < count ; i++)
                    {
                         if(strcmp(b[i].bookauthor,authorname) == 0)
                         {
                         	  
                              printf("\n%s\n",b[i].bookname);
                         }
                    } break;
                    
                case 4:
                	printf("to print the list of specified book on the basis of \n");
                	printf("\nPRESS 1. for accession number");
                    
                    printf("\nPRESS 2.for author names.\n");
                    printf("\nPRESS 3.for price of the book.\n");
                    printf("Enter your choice\n");
                    int choice;
                    scanf("%d",&choice);
                    switch(choice)
		        	{
		        		case 1:
		        			
		        			printf("Accession Number : ");
                            scanf("%d",&a);
                            for(i=0;i<count;i++)
                            {
                            	if(b[i].bookaccno==a)
                            	{
                            		printf("Book name is %s",b[i].bookname);
                            		break;
								}
							}
		        		break;
		        
		        		case 2:
		        			printf("\nEnter Author Name: ");
                            scanf("%s",c);
                            for(i=0;i<count;i++)
                            {
                            if(strcmp(b[i].bookauthor,c) == 0)
                            	{
                            		printf("Book name is %s",b[i].bookname);
                            		break;
								}
							}
		        		break;
				        case 3:
				        	printf("Enter the price\n");
				        	scanf("%d",&p);
				            for(i=0;i<count;i++)
                            {
                            	if(b[i].bookprice==p)
                            	{
                            		printf("Book name is %s",b[i].bookname);
                            		break;
								}
							}
				        break;
				        default:printf("wrong choice");
				    }          
                case 5:
                	
                    printf("\nTotal Number of Books in Library : %d\n",count);
                    printf("-----------------------------------------\n");
                    break;
                
                case 6:
                	for(i=0;i<count-1;i++)
                	{
                	  int s=i;
                      for(j=i+1;j<count;j++)
                      {
                          if(b[j].bookaccno<b[s].bookaccno)
                          s=j;
                      }
                      struct book t=b[i];
                      b[i]=b[s];b[s]=t;
					}
               printf("\nThe Book In Order Of Accession Number :\n");
               for(j=0;j<count;j++){
                   printf("\nbook accession no. : %d",b[j].bookaccno);
               printf("Book Name: %s\n",b[j].bookname);
               printf("Book author: %s\n",b[j].bookauthor);
               printf("Book accession no: %d\n",b[j].bookaccno);
               printf("Book price: %d\n",b[j].bookprice);
			   printf("\n-----------------------------------------\n");
            }
                	
                case 7 :
                    exit(0);
     }
     return count;
}
     

int main()

{
     struct book b[450];
     int ch=0,n,i,j,count = 0;
     
       while(ch != 7)
     {
	  
      
     	  printf("\nPRESS 1.To add book information.");
          printf("\nPRESS 2.To display book information.");
          printf("\nPRESS 3.To list all books of given author.");
          printf("\nPRESS 4.To list the title of specified book.");
          printf("\nPRESS 5.To list the count of books in the library.");
          printf("\nPRESS 6.To list the books in the order of accession number.");
          printf("\nPRESS 7.To exit.");
          printf("\n-------------------------------------\n");
          printf("Enter Your Choice: ");
          scanf("%d",&ch);
          
           count=compute (ch,b,count);
            
     }
     return 0;
}
