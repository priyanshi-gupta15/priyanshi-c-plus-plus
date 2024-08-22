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
//	cout<<s<<endl;
}
//void hello:: set(void) {
//	for(int i=0; i<=s.length() ; i++) {
//		if(s.at(i)!='0' && s.at(i)!='1') {
//			cout<<"this is not binary no"<<endl;
//		} else {
//			cout<<"this is binary no"<<endl;
//		}
//	
//
//		exit(0);
//	}
//}


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
