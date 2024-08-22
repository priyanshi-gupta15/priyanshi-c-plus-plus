#include<iostream>
using namespace std;
class hello {
//freind fxn

	protected:
		int q;
		friend int hi(hello);


};
int hi(hello s1){
	s1.q=10;
	cout<<s1.q;
}
int main() {
   hello s1;
   hi(s1);
}