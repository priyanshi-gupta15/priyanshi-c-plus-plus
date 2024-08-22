#include<iostream>
#include<fstream>
using namespace std;


int main() {
	int j,a,n,i,s=10;
	cout<<"enter the number";
	cin>>n;
	ofstream myfile;
	for(j=1; j<=n; j++) {

		myfile.open(to_string(i)+" Table.txt");


		for(i=1; i<=10; i++) {
			myfile<<j<<"*"<<i<<"="<<j*i<<endl;

		}
		cout<<"\n";

	}
	myfile.close();
}