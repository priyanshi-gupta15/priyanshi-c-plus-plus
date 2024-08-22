#include<iostream>
using namespace std;
class hello {
	public:
		int a=30;
		virtual int hi() {
		cout<<a;
		

		}
};
class hello2:public hello {
	public:
		int hi() {
			cout<<"this is the derived class"<<endl;
		}
};
int main() {
	hello2 s1;
	hello* base=&s1;
	 base-> hi();

}