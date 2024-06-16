#include<stdio.h>
int fibonacci(int n)
{
	return(n<=1)?n:
		fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
	int n;
	printf("enter the number of terms:");
	scanf("%d",&n);
	printf("fibonacci series:");
	for(int i=0;i<n;i++)
	{
		printf("%d",fibonacci(i));
	}
	return 0;
}
