#include<stdio.h>

int main (){

int binary1, binary2;
int i=0;
int remainder = 0;
int sum[20];


    printf("Enter any first binary number: ");

    scanf("%d",&binary1);

    printf("Enter any second binary number: ");

    scanf("%d",&binary2);


    while(binary1!=0||binary2!=0){

         sum[i++] =  (binary1 %10 + binary2 %10 + remainder ) % 2;

         remainder = (binary1 %10 + binary2 %10 + remainder ) / 2;

         binary1 = binary1/10;

         binary2 = binary2/10;

    }


    if(remainder!=0)

         sum[i++] = remainder;


    --i;

    printf("Sum of two binary numbers: ");

    while(i>=0)

         printf("%d",sum[i--]);


   return 0;

}
