#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void insertionSort(int arr[],int n)
{
	int i,key,j;
	for(i=1;i<n;i++)
	{
		key=arr[1];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
void linearSearch(int arr[],int n,int s)
{
	for(i=0;i<n;i++)
	{
		if(arr[i]==s)
		{
			printf("The %d is found at index of %d",s,i);
			break;
		}
	}
}
int main()
{
	int num=0,i=0,s=0;
	printf("Enter how many number you wants to enter: ");
	scanf("%d",&num);
	int *arr=(int *) malloc(num*sizeof(int));
	printf("\nEnter the elements one by one: ");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Please enter the element which you want to search: ");
	scanf("%d",&s);
	
	
	//implementing Linear search algorithm which takes O(n)
	clock_t beginLS=clock();
	linearSearch(arr,num,s);
	clock_t endLS=clock();
	double time_spentLS=(double)(endLS-beginLS)/CLOCKS_PER_SEC;
	
	
	//Implementing Insertion sort which takes O(n^2)
	clock_t beginIS=clock();
	insertionSort(arr,num);
	clock_t endIS=clock();
	double time_spentIS=(double)(endIS-beginIS)/CLOCKS_PER_SEC;
	
	
	
	
	
	printf("\nTime taken in Linear Search: %lf\n",time_spentLS);
	printf("\nTime taken in Insertion Sort: %lf\n",time_spentIS);
	
	return 0;
}
