#include<iostream>
using namespace std;
class father {
	public:
		int hi(){
			cout<<"this is the father class"<<endl;
		}
};
class me:public father {
	public:
		int hi2(){
		
		cout<<"this is the mine class "<<endl;
		}
};
class her:public father {
	public:
		int hi3(){
		
		cout<<"this is the her class "<<endl;
		}
};

int main() {
me s2;
s2.hi2();
s2.hi();

her s3;
s3.hi3();
s3.hi();


}