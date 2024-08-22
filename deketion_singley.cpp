#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display();
void del();

	struct node {
		int data;
		struct node *next;

	};
	struct node *start, *newnode,*temp, *t;
	
	int main() {
	int ch;
	start=0;
	do
	{
		newnode=(struct node*)malloc(sizeof (struct node));
		newnode->next=0;
		printf ("enter the data");
		scanf("%d",&newnode->data);
		if(start==0)
		 {
			start = temp = newnode;

		} 
		else
		 {
			temp->next=newnode;
			temp=newnode;
		}
		
		printf("to continue for press1");
		scanf("%d",&ch);
}while(ch==1);
void display();
}
void display()
{
struct node *t;
	t=start;
	while(t!=0) 
		{
			printf("data =%d\n",t->data);
			t=t->next;
		}
}
void del()
{
int pos,i=0;
	printf("enetr the node no.for deletion");
	scanf("%d",&pos);
	struct node *t;
	t=start;
	while(t!=0) 
	{ 	
		if(i!=pos)
		t=t->next;
		else
		t->next=newnode->next;	
		i++;
}	
}

