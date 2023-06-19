#include<stdio.h>
int main()
{
	int num,count = 0;
	unsigned long long int mobilenumber;
	printf("\n\tMobile Number : ");
	scanf("%llu",&mobilenumber);
	num = mobilenumber;
	while(num != 0)
	{
		num = num/10;
		count++;
		printf("\n%d",count);
	}
	if(count < 10)
	{
		printf("\n\tEnter valid mobile number");
		main();
	}
	
}
