#include<iostream>
#include<fstream>
using namespace std;


int main() {
	int j,a,n,i,s=10;
	cout<<"enter the  first number number";
	cin>>a;
	cout<<"enter the  second number number";
	cin>>n;
	
	ofstream myfile;
	for(j=a; j<=n; j++) {

		myfile.open(to_string(j)+" Table.txt");


		for(i=1; i<=10; i++) {
			myfile<<j<<"*"<<i<<"="<<j*i<<endl;

		}	myfile.close();
		cout<<"\n";

	}

}