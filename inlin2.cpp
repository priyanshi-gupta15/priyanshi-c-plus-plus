//inline function

#include<iostream>
using namespace std;
	inline	int hi(int a, int b) {
			return a+b;
		}
int main() {
	int user1,user2;
	cin>>user1>>user2;
cout<<hi(user1,user2);
}
