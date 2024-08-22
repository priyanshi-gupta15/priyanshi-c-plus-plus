#include<iostream>
using namespace std;
class hello {

	protected:
		int a=10;
		int b=20;
	
  friend int hi(hello);


};
 int hi(hello s1) {
 	s1.a;
 	s1.b;
 	cout<<"this is the value of a"<<s1.a<<endl<<s1.b;
 	
 	
  };

int main() {
	hello s1;
	hi(s1);
}