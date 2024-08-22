#include<iostream>
#include<fstream>
using namespace std;


int main() {
	int a,n,i;
	cout<<"enter the number";
	cin>>n;
	ofstream myfile("hello.txt");
	for(i=1; i<=10; i++) {
		myfile<<n<<"*"<<i<<"="<<n*i<<endl;

	}
	myfile.close();



	
}