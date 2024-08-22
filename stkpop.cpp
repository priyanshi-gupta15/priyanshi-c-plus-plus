
#include<stdio.h>
#include<process.h>
int top=-1,max,stk[50],ch;
void push();
void pop(); 
void display();
void stop()
{
	exit(0);
}
 int main() 
 {

	printf("enter the stack value");
	scanf("%d",&max);
	do {
		printf("enter the choice \n 1.push \n 2.pop \n 3.display \n 4.exit");
		scanf("%d",&ch);
		switch(ch)
		 {
				case 1 :
				push();
				break;
				case 2:
				pop();
				break;
				case 3:
				display();
				break;
				case 4:
	            stop();
	            break;
				default:
				printf("please enter the valid choice ");
		}
	} while(ch!=4);
	return 0;
}
void pop() 
{	
//for(top=max; top>-1; top--) 
//{
		if(top==-1) 
			printf("stack is underflow");
		else 
				printf("pop item is=%d",stk[top])	;		
//}	
}

void display() 
{
		//for(top=0; top<=max; top++)
		 //{
			printf("%d",stk[top]);
			//	}

	}
void push() 
{
	//for(top=0; top<=max; top++) 
	//{

			if(top==max)
				printf("stack is overflow");
			 else 
				printf("enter the item");
				scanf("%d",&stk[top]);
	//}
}
