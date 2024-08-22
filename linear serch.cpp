#include<stdio.h>
int main() {
	int a[10],i,s;
	printf("enter the element");
	
	for(i=0; i<5; i++) {
		scanf("%d",&a[i]);
	}
	printf("\n");

	for(i=0; i<5; i++) {
		printf("%d",a[i]);
		printf("\n");
	}
    printf("enter the serch element");
	scanf("%d",&s);
	for(i=0; i<5; i++) {
		
	if (s==a[i])
	{ printf("serch element is found=%d and pos %d",a[i] ,i);
	break;
	}
	
	}
	
			
	

}
