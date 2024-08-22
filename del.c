#include<stdio.h>
int main() {
	int arr[10],n,i,j,pos;
	printf("enter the size of the arr");
	scanf("%d",&n);
	for(i=0; i<=n; i++) {
		scanf("%d",&arr[i]);
		//	printf("\n");
	}
	printf("before deletion");
	for(i=0; i<=n; i++) {
		printf("%d",arr[i]);
		printf("\n");
	}
	printf("enter the delete pos");
	scanf("%d",&pos);
	for(i=0; i<=n; i++) {
		if(i==pos ) 
		{
			arr[i]=arr[i+1]	;
		}

		//	printf("%d",arr[i]);
		//printf("\n");



	}
	printf("after deletion");
	for(i=0; i<=n; i++) {
		printf("%d",arr[i]);
		printf("\n");
	}
	
}