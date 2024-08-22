#include<iostream>
using namespace std;
class hello {
	public:
		int a= 10;
		int b=20;
};
class me:public hello {
	public:
		int hi(){
		
		cout<<"this is the value from parent class"<<a <<endl<<b<<endl;
		}
};
int main() {
me s2;
s2.hi();


}