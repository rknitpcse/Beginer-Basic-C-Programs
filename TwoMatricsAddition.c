#include<stdio.h>
int main()
{
	int r1,r2,c1,c2;
	printf("Enter how many rows and colum you have in matrix A:-\nr1=\nc1=\n");
	scanf("%d%d",&r1,&c1);
	int m1[r1][c1];
	printf("Enter the matrix A elements:-");
	int i,j;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\nm1[%d][%d]=",(i+1),(j+1));
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter how many rows and colum you have in matrix B:-\nr2=\nc2=\n");
	scanf("%d%d",&r2,&c2);
	int m2[r2][c2];
	printf("Enter the matrix B elements:-");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\nm2[%d][%d]=",(i+1),(j+1));
			scanf("%d",&m2[i][j]);
		}
	}
	printf("your 1st matrix A is shown below:-\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}
	printf("\nyour 2nd matrix B is shown below:-\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");
	}
	if(r1==r2&&c1==c2)
	{
		printf("your added matrix is shown below:-\n");
		for(i=0;i<r1;i++)
		{
		  for(j=0;j<c1;j++)
		  {
		  	int md[r1][c1];
		  	md[i][j]=0;
		  	md[i][j]+=(m1[i][j]+m2[i][j]);
		  	printf("%d\t",md[i][j]);
		  }
		  printf("\n");	
		}
	}
	return 0;
}
