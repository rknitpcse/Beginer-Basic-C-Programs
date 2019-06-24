//Binary search Tree......
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
/*RAKESH KUMAR*/
struct node* newl();
int count=0;
struct node
{
	struct node *left,*right;
	int data;
}*start=NULL;
void insert()
{
	struct node *temp=newl(),*tmp=NULL;
	int data;
	printf("\nEnter the data:-");
	scanf("%d",&temp->data);
	if(count==0)
	{
		start=temp;
		temp->left=NULL;
		temp->right=NULL;
	}
	else
	{
		tmp=start;
	}
	count++;
}
struct node* newl()
{
	struct node *newll=(struct node*)malloc(sizeof(struct node));
	return newll;
}

