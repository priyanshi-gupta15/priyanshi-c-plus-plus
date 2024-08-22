//copy constructor
#include<iostream>
using namespace std;
class hello {
	int a;
	public:
		hello() {

		}
		hello(int num)
		{
			a=num;
		}
		hello(hello &cc)
		{
		  cout<<"this is copy constructor"<<endl;
		  a=cc.a;
		  
		}
		void hi(){
			cout<<" thid is the value pf a"<<a<<endl;
		}
		};
int main()
{
hello s1(30);
hello s2(s1);
 s1.hi();
 s2.hi();

	
}
