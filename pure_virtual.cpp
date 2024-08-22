#include<iostream>
using namespace std;
class hello {
	public:
		virtual void hi()=0;
		 

};
class hello2:public hello {
	public:
		void hi() {
			cout<<"this is the derive class"<<endl;

		}
};
int main() {
	hello2 derive;
	hello*base=&derive;
	base-> hi();
}