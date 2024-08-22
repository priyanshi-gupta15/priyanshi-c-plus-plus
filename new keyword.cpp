#include<iostream>
using namespace std;
int main()
{
	int user;
	cin>>user;
	int *arr =new int [user];
	arr[2]=4;
	arr[0]=1;
	delete[] arr;
	cout<<arr[0]<<endl<<arr[2]<<endl;
	
}