#include<stdio.h>
int main()
{
  int amount,ten,fifty,hundred;
	printf("Enter the amount to be wirthdraw");
	scanf("%d",&amount);
	ten=amount/10;
	fifty=amount/50;
	hundred=amount/100;
	printf("The cashiar will give ten notes=%d\nfifty notes=%d\nhundred notes=%d\n",ten,fifty,hundred);
	return 0;
}
