\
#include <iostream>
using namespace std;
	int count=0;
class hello{

	public:
hello()
{  
	count++;
	cout<<"this is the value of constructor"<<count<<endl;
	
}
~hello(){
cout<<"this is value of count  in destructor"<<count<<endl;
count--;

}
};
int main()
{
hello s1;
hello s2,s3,s4,s5;	
}
