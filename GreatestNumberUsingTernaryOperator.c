#include<stdio.h>
int main()
{
	int a,b,c,max,max1;
	printf("Enter three numbers:-\na=\nb=\nc=\n");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b)?a:b;
	max1=(max>c)?max:c;
	printf("The greatest number is %d",max1);
	return 0;
}
