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
class B:public A {
	public:
		int hi() {

			cout<<"this is valve of"<<x<<endl;
			cout<<"this is valve of"<<y<<endl;
			cout<<"this is valve of"<<z<<endl;
				return 0;
		}
	

};
int main() {

	B b1;
	b1.hi();
}