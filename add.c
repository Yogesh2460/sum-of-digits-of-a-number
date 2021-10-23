#include<stdio.h>

int add(int n)
{
	if(n)
	{
	return((n%10)+add(n/10));
}
else
{return 0;}

}


int main()
{
	int n;
	printf("input number");
	scanf("%d",&n);
	printf("sum of digits:%d",add(n));
	return 0;
}
