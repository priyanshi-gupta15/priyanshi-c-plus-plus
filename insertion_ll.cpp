#include<stdio.h>
#include<conio.h>
#include<cstdlib>
int main() {
	int ch;
	struct node {
		int data;
		struct node *next;

	};
	struct node* start, *newnode,*temp;
	start=0;
	while(ch=1) {
		struct node* newnode=(struct node*)malloc(sizeof (struct node));
		newnode-> next=0;
		printf ("enter the data");
		scanf("%d",&newnode-> data);
		if (start==0) {
			start =temp=newnode;

		} else {
			temp->next=newnode;
			temp=newnode;
		}
		printf("if you want to countinue press 1");
		scanf("%d",&ch); 
		getch();

	}

}