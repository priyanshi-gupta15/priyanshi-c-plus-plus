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
class she:public me {
	public:
		int hi(){
		int c=50;
		cout<<"this is the value from upper parent class"<<a <<endl<<b<<endl<<c<<endl;
		}
};

int main() {
hello s1;
me s2;
s2.hi();
she s3;
s3.hi();



}