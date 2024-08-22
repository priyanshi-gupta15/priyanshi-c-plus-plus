#include<iostream>
using namespace std ;
class hello {
	public:
	//	int a=10;
	int hi()
	{
		cout<<"this is the base class ,parent class , super class"<<endl;
		return 0;
	}



};
class hello2 :public hello {
	public:
	//	int b=20;
	int hi2()
	{
	cout<<"this is the derive class ,sub class , child class"<<endl;
	return 0;
		}	
};
int main(){

//hello s1;
 hello2 s2;
cout<<s2.hi2()<<endl;
cout<<s2.hi()<<endl;
}