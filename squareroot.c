#include<stdio.h>
void main()
{
	int num,a=1,r=1,re,re1;
	printf("enter a number\n");
	scanf("%d",&num);
	while(r<=num)
	{
		re=a;
		re1=r;
		r=power(a++);

	}
	num=num-re1;
	printf("%d\n%d\n",--re,re1);
}
int power(int a)
{
	int i,r=1;
	for(i=0;i<a;i++)
	r=r*a;
	return r;
}

