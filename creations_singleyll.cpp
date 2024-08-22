#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display();
void del();
int main() {
	int ch;
	struct node {
		int data;
		struct node *next;

	};
	struct node *start, *newnode,*temp;
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
