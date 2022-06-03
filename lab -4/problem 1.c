#include<stdio.h>
int main()
{

	int choice,i,fact=1,number,num,count=0;



	printf("\n------------------------------------------------------");
    printf("\nChoices are as below\n");
    printf("1:Factorial\t");
    printf("2:Prime\t\t");
    printf("3:Odd/Even\t");
    printf("4:Exit\n");
	printf("Enter choice ");
	scanf("%d",&choice);

	switch(choice)
	{

		case 1:

        printf("Enter a number: ");
        scanf("%d",&number);
        for(i=1;i<=number;i++){
        fact=fact*i;
    }
