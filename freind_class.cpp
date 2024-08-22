#include<iostream>
using namespace std;
class hello {
	public:
		int aa,bb;
	private:
		int a;
	protected:
		int b;
		friend class f;


};
class f {
	public:
		void hi(hello &priyanshi) {
			cout<<"give the name and password"<<endl;
		//	cin>>s1.a;
		//	cin>>s1.b>>
			priyanshi.aa=50;
			priyanshi.bb=46;
			
		

		//	return priyanshi.aa+priyanshi.bb;
			cout<<"this is the value"<<priyanshi.aa<<endl<<priyanshi.bb<<endl;

		}

};
int main() {
	hello s1;
//	cin>>s1.a;
	//cin>>s1.bb;
	f s2;
	s2.hi(s1);
}