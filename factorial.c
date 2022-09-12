#include<stdio.h>
int factorial(int num);
void main()
{
	int number,result;
	printf("enter a positive number \n");
	scanf("%d",&number);
	result=factorial(number);
	printf("factorial=%d",result);
}
int factorial(int num)
{
	if(num!=1)
	{
		return num*factorial(num-1);
	}
	else
	{
		return num;
	}
}
