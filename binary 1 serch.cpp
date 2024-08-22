#include<stdio.h>
   int main()
    {
	int a[10], first, last, mid,i,s;
	printf("enter the element");
	for(i=0; i<10; i++) {
		scanf("%d",&a[i]);
	}
	printf("enter the serch element");
	scanf("%d",&s);
	
	first=0;
	last=9;
	mid=(first+last)/2;

	while (first<=last) 
	{
		if(s>a[mid])
			first=mid+1;

		 else if(s==a[mid]) 
		 {
		 	
			printf("elemnt is found = %d and pos=%d",s,mid);
			break;
		}
		else 
			last=mid-1;
			mid=(first+last)/2;
	}
	if(first>last) 
		printf("element is not found");
	
	
return 0;
	
}