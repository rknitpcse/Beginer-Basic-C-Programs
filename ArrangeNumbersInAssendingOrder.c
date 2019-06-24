//Assending order//
#include<stdio.h>
/*RAKESH KUMAR */
int main()
{
	int n,i,j;
	printf("Enter how many number you have=");
	scanf("%d",&n);
	int a[n];
	 printf("\nEnter the numbers one by one:-\n");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 for(i=0;i<n-1;i++)
	 {
	 	for(j=i+1;j<n;j++)
	 	{
	 		if(a[i]>a[j])
	 		{
	 			int t=a[i];
	 			a[i]=a[j];
	 			a[j]=t;
			 }
		 }
	 }
printf("\nAssending order series:-\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d\n",a[i]);
	 }
	 return 0;
}
