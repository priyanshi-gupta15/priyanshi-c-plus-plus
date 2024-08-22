#include <stdio.h>
int main(){
    int sum = 0;
   int arr[]= {10011001 , 11100010 ,00100100,10000100} ;


   for (int i = 0; i <4; i++)
   {
    sum= sum+arr[i];
    
   }
   printf("%d", sum);
   
}