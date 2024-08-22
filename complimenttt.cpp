#include<iostream>
using namespace std;
class hello {
		int i;
		string s;
	public:
		void get(void);
		void set(void);
		void compliment();

};
void hello::get(void) {
	cout<<"enter the number"<<endl;
	cin>>s;

}



void hello:: compliment() {
//	void set();
for(int i=0; i<=s.length() ; i++) {
	if(s.at(i)==0) {
		s.at(i)='1';
	} else
		s.at(i)='0';
}
}
int main() {
	hello s1;
	s1. get();
	s1.set();
	s1.compliment();

	// cout<<"this is value of string"<< s1.get()<<endl
}
