#include<stdio.h>
int main() {
	int a[20],i,j,n,temp;
	printf("enter the array size \n ");
	scanf("%d",&n);
	printf("enter the array value \n ");
	for(i=0; i<=n; i++) {
		scanf("%d",&a[i]);
		printf("\n");
		
	}
	for(i=0; i<=n; i++) {
		temp=a[i];
		j=i-1;

		while(j>=0&& temp<a[j])

		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	printf("your ans is \n ");
	for(i=0; i<=n; i++) {
		
		printf(" %d",a[i]);
		printf("\n");
	}


}

