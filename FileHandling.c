#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int num=10,i=0;
	FILE *file1=NULL;
	if((file1=fopen("fRead.txt","w"))==NULL)
	{
		printf("Error! In opening file1 which name is fRead.txt\n");
		exit(0);
	}
	srand(time(0));
	for(i=0;i<num;i++)
	{
		fprintf(file1,"%d ",rand());
	}
	fclose(file1);
	if((file1=fopen("fRead.txt","r"))==NULL)
	{
		printf("Error! In opening file1 which name is fRead.txt\n");
		exit(0);
	}
	FILE *file2=NULL;
	if((file2=fopen("fCopy.txt","w"))==NULL)
	{
		printf("Error! In copying file2 which name is fCopy.txt\n");
		exit(1);
	}
	//Reading from fRead.txt file1
	char c=fgetc(file1);
	while(c!=EOF)
	{
		fputc(c,file2);
		c=fgetc(file1);
	}
	printf("Contents copy from fRead.txt to fCopy.txt..");
	fclose(file1);
	fclose(file2);
	return 0;
}
