#include<stdio.h>
int main()
{
	int num,i,a[100]={0,0},t=0;
	printf("Enter the number=");
	scanf("%d",&num);
	for(i=0;num>=1;i++)
	{
		a[i]=(num%2);
		num=(num/2);
		t++;
	}
	while(t>=0)
	{
		printf("%d",a[t]);
		t--;
	}
	return 0;
}
