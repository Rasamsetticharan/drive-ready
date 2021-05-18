#include<stdio.h>
void reverse(int n,int rev,int rem)
{
	while(n)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("%d",rev);
	if(n==rev)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}
int main()
{
	int n,rev=0,rem;
	scanf("%d",&n);
	reverse(n,rev,rem);
	return 0;
}
