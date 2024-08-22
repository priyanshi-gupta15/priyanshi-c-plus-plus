#include<iostream>
using namespace std;
class A {
	public:
		int x=10;
	public:
		int y=12;
	protected :
		int z=13;




};
class C {
	public:
		int a=10;
	public:
		int b=12;
	protected :
		int c=13;


};

class B:public A, public C {
	public:
		int hi() {
			cout<<"upeer base class";
			cout<<"this is valve of"<<x<<endl;
			cout<<"this is valve of"<<y<<endl;
			cout<<"this is valve of"<<z<<endl;
			cout<<"second base class";
			cout<<"this is valve of"<<a<<endl;
			cout<<"this is valve of"<<b<<endl;
			cout<<"this is valve of"<<c<<endl;
			cout<<"derive class";
			return 0;
		}


};
int main() {

	B b1;
	b1.hi();
}