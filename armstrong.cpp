#include<iostream>
#include<math.h>
using namespace std;
int main(){
 int x,i ,n,s=0 ;
 cin>>n;
 do{
 
 i=n%10;
 s=s+(i)^3;
 n=n/10;
 }
 while(n==0);
 if(n==s){
 	cout<<"this is armstrong";
 }
 else{
 	cout<<"this is not";
 }	
}
