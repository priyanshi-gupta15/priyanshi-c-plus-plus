#include<iostream>
using namespace std;
class hello{
	public :
		int x;
		
	 int hi(int x)
	 {
	 	this-> x=x;
	 	return x;
	 }
	 int hi2()
	 {
	 cout<<"this is value of x"<<x;
	 	
	 }
};
int main(){
	hello s1;
	cout<<s1.hi(7);
	s1.hi2();
}