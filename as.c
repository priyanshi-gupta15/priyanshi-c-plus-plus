#include<stdio.h>
int main()
{
	
int arr[5]={1,2,3,44,5};
int a,j,i,pos,user;
for(i=0;i<=5;i++)
{

printf("%d",arr[i]);
printf("\n");
}

printf("enetr the poss");
scanf("&d",&pos);

printf("enter the  number");
scanf("&d",&j);
for(i=5;i>=pos;i--)
{
	if(i==pos)
	{arr[i]==j;
	
	}
	else
	{
		arr[i]=arr[i-1];
	}
	
}
printf("after shifting");
for(i=0;i<=5;i++)
{
printf("%d",arr[i]);
printf("\n"); 
}
//pos=pos-1;



//arr[pos]=j;
//
////user=j;

return 0;
}