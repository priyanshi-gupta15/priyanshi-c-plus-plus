#include<iostream>
using namespace std;
class hello {
	public:
		int a;
		void hi1() {
				cout<<"enter the value of a and b"<<endl;
				cin>>a;
		}
};
class me:public hello {
	public:
		int b;
		void hi2() {
			cout<<"enter the value of c"<<endl;
			cin>>b;
		}
};
class she {
	public:
		int c;
		void hi3() {
			cout<<"this is value of d"<<c<<endl;
			cin>>c;

		}
};
class hyy:public me,public she {
	public:
		void hi4() 
		{
			hi1();
			hi2();
			hi3();
			cout<<"this is the sum of "<<a+b+c<<endl;

		}
};

int main() {
	hyy s4;
	s4.hi4();

}