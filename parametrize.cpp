#include <iostream>
using namespace std;
class hello{
	int a;
	int b;
	public:
	hello(int ,int );
	void he(){
		cout<<"this is the value of "<<a<<"+"<<b<<"="<<a+b<<endl;
		
	}	
};
hello::hello(int x,int y)
{ a=x;
 b=y;
}
int main()

{
 hello s1(10,50);
s1.he();
}