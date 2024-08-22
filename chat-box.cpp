#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main() {
	ofstream wfile("chatbox.txt");


	char a;
	int i,j;

	cout<<"enter your detail"<<endl;
	cin>>a ;
	while(a<=20) {
		if (a<=20) {

			wfile<<a<<endl;
		}
		else{
			cout<<"give your detail in 20 words";
		}
	}

//	string text;
//    ifstream rfile ("chatbox.txt");
//	while(getline(rfile,text))	{
//		cout<<text<<endl;
//	}

	wfile.close();
}