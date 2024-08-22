#include<iostream>
using namespace std;
class hello {
	public:
		int a;
		int b;
		void hi1(){
			cout<<"enter the value";
			cin>>a>>b;
		}
};
class me:public hello {
	public:
		int c;
			void hi2(){
			cout<<"enter the value";
			cin>>c;
		cout<<"this is the value from parent class"<<a <<endl<<b<<endl<<c;
		}
};
class she {
	public:
		int d;
		void hi3(){
		cout<<"enter value of d";
		cin>>d;
		
	//	cout<<"this is the value from upper parent class"<<a <<endl<<b<<endl<<c<<endl<<d;
		}
};
class hyy:public me,public she{
	public:
	void hi4(){
	   hi1();
	   hi2();
	   hi3();
	   cout<<"this is the sum of "<<a+b+c+d;
	   	
	}
};

int main() {
hyy s4;
s4.hi4();



}
