#include<iostream>
using namespace std;
class hello {
		int x;
	public:
		void hi(int x) {
				this ->x=x;

		}
		void hi2 (){
			cout<<"this is the value of x"<<x<<endl;
		}
		

};
 int main(){
  hello s1;
  s1.hi(22);
  s1.hi2();
  	
 }
