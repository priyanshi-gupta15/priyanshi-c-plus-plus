#include<iostream>
using namespace std;
class hello{
	public:
		static void hi(){
			cout<<"this is my age"<<age<<endl;
		}
		static int age;
		
};
 int hello::age=18;
int main(){
	hello::hi();
	
}