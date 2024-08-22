#include <iostream>
using namespace std;
class hello {
	public :
		virtual void hi(){
			cout<<"this is base class"<<endl;
		}
		
};
class hello2 :public hello{
	public:
		void hi(){
			cout<<"this is derived class"<<endl;
		}
};
int main(){
	hello2 derived;
	hello*base=&derived;
	base->hi();
	
}
