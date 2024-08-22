#include<iostream>
#include<fstream>
using namespace std;
string name,master_in,data_mining;
int i,j,id ;
class hello {
	public:
		
		

};

int main() {
	ofstream myfile (" employee.txt");
	for(j=1; j<=3; j++) {
			cout<<"enter the name"<<endl;
			cin>>name;
			cout<<"enter the id"<<endl;
			cin>>id;
			cout<<"enter your familiar langusage"<<endl;
			cin>>master_in;
		if(master_in==data_mining) {

			myfile<<"this is your name = "<<name<<" \n this is your id = "<<id<<"\n your familiar language"<<master_in<<endl;
		}
		
	}
	myfile.close();
		cout<<"\n";

}