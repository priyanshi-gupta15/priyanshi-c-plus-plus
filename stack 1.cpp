
//stack=
#include<stdio.h>
int main() {
	int top=-1,max,stk[50];
	printf("enter the stack value");
	scanf("%d",&max);
	for(top=0; top<=max; top++) {

		if(top==max) {
			printf("stack is overflow");
		} else {
			printf("enter the item");
			scanf("%d",&stk[top]);
		}
	}
}