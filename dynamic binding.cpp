#include<iostream>
using namespace std;
class hello{
	public:
		void hi(int a){
			int arr[10]={1,2,3,4,5,6};
			cout<<arr[a];
		}
};
int main (){


int user;
cout<<"enter the number";
cin>>user;
hello s1;
s1.hi(user);

}
