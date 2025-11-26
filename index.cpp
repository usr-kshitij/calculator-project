#include<stdio.h>
void hello();
int add(int num1,int num2);
int sub(int num1,int num2);
int mul(int num1,int num2);
int div(int num1,int num2);

int main()
{
	
	int num1,num2;
	int choice;
	int sum;
	int diff;
	int product;
	int divide;
	char again;
	
do{
    hello();
	printf("Enter two  number : \n");
	scanf("%d %d",&num1,&num2);
	printf("Enter your choice: \n");
    scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			sum=add(num1,num2);
			printf("addition of numbers is %d",sum);
	    break;
		case 2:
		     diff=sub(num1, num2);
		     printf("difference of numbers %d",diff);
	    break;
			case 3:
		     product=mul(num1, num2);
		     printf(" product of numbers %d",product);
	    break;
		case 4:
		     divide=div(num1, num2);
		     printf(" dividation of numbers %d",divide);
	    break;
		
		default:
		     printf("Invalid choice enter number between 1 to 4 only!!!! ");
		 }
		 
		 printf("\nDo you want to continue it for other operations (y/n)");
		 scanf(" %c",&again);
		
			} while(again == 'y');
			
			printf("\nThanks for using my calculator\n");
			return 0;	
   }

void hello(){
	printf("\n\nWELCOME TO CALCULATOR\n1.addition\n2.substraction\n3.product\n4.dividation\n\n");
}

	int add(int num1,int num2)
	{
	int  result;
	result = num1 + num2;
	return result;	
	}
	
	int sub(int num1,int num2)
	{
	int  result1;
	result1 = num1 - num2;
	return result1;	
	}
	
	int mul(int num1,int num2)
	{
	int  result2;
	result2 = num1 * num2;
	return result2;	
	}
	
   int div(int num1,int num2)
	{
	int  result3;
	result3 = num1 / num2;
	return result3;	
	}

