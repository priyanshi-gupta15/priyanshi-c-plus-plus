#include<iostream>
using namespace std;
class hello {
	public:
		string name = "priyanshi";
	protected:
		int password = 123;

	public:
		friend int hi(hello);

};
int hi(hello s1) {
	cout<<"this the name  " <<s1.name<<endl;
	cout<<"this is ypour password  "  <<s1.password<<endl;
}
int main() {
	hello s1;
	hi(s1);
}