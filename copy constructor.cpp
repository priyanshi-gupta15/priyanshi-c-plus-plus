//copy constructor
#include <iostream>
using namespace std;
class hello {
		int a;
		int b;
	public:
		hello( ) {

		}
		hello(int num) {
			a=num;
		}
		hello(hello &aa) {
			cout<<"this is copy constructor"<<endl;
			a=aa.a;

		}
		void hi() {
			cout<<"this is the value of a"<<a<<endl;
		}

};
int main() {
	hello s1(30);
	hello s2(s1);
	s2.hi();
}


