#include <iostream>
using namespace std;
class hello {

		int x;
	public:
		int hi(int x) {
		this ->	x=x;
		}
		int hi2() {
			cout<<"this is the value of the x"<<" ="<<x<<endl;
		}

};
int main() {
	hello s1;
	s1.hi(22);
	s1.hi2();
}