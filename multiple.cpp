#include<iostream>
using namespace std;
class hello {
	public:

		int a= 10;
		int b=20;
		
		//cout<<"this is base class"<<a<<b<<endl;
		
};
class me {
	public:
		
			int c=40;
			int d=50;
		//	cout<<"this is the value from parent class  "<<c<<d<<endl;
		
};
class she :public me,public hello {
	public:
		int f=60;
		int hi() {
			
			cout<<"this is the value from upper parent class  "<<a<<"  "<<b<<"  "<<c<<"  "<<d<<"  "<<f<<endl;
		}
};

int main() {


	she s3;
	//s3.hi();
//	s3.hi();
	s3.hi();



}