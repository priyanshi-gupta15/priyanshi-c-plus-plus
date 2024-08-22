#include<iostream>
using namespace std;
class hello {

	protected:
		int a;
		int b;
	public:
		friend class f;


};
class f {

	public:
		void hi(hello &aa) {
			aa.a =10;
			aa.b =20;
			cout<<"this is the value of protected "<<aa.a<<endl<<aa.b<<endl;
		}
};
int main() {
	hello s1;
	f s2;
	s2.hi(s1);
}