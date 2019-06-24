#include<stdio.h>
#include<math.h>
int main()
{
	int num,agr=0,i;
	printf("Enter number=");
	scanf("%d",&num);
	i=num;
	while(i>=1)
	{
	agr=(agr+pow((i%10),3));	
	i=(i/10);
	}
	if(num==agr)
	printf("%d is agstrom number",num);
	else
	printf("%d is not agstrom number",num);
	return 0;
}
