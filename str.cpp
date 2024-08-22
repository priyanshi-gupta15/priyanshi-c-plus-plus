#include <iostream>
using namespace std;
class hello{
	string a;
	string b;
	string user;
	public:
	hello(string ,string );
	void he(){
	//	cout<<"this is the value of "<<a<<"+"<<b<<"="<<a+b<<endl;
	cout<<"this the lenth of string"<<user.length()<<endl;
		
	}	
};
hello::hello(string x,string y)
{ a=user;
 
}
int main()

{
	string user;
 cout<<"enter the value"<<endl;
  cin>>user;
 hello s1(user);
s1.he();
}