#include <iostream>
using namespace std;
class hello{
	int a;
	int fac=1;
	public:
	hello(int a);
	void he(){
		for(int i=1;i<=a;i++)
		{
		fac= fac*i;	
		}
		
		cout<<"this is the value of  factorial"<<" "<<fac<<endl;
		
	}	
};
hello::hello(int x)
{
	a=x;
}
int main()
{

  int user;
 cout<<"enter the value"<<endl;
  cin>>user;
 hello s1(user);
s1.he();
}