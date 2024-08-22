#include<iostream>
using namespace std;
class hello {
	public:
		int a;
		int b;
		void hi() {
			cout<<"enter the value of a and b"<<endl;
			cin>>a>>b;
		}
};
class me:public hello {
	public:
		int c;
		void hi() {
			cout<<"enter the value of c"<<endl;
			cin>>c;
		}
};
class she {
	public:
		int d;
		void hi() {

			cout<<"enter the value of d"<<d<<endl;
			cin>>d;

		}
};
class hyy:public me,public she {
	public:
		void hi() {
			
			cout<<"this is the sum of "<<a+b+c+d<<endl;

		}
};

int main() {
	hyy s4;
	s4.hi();



}
