#include<iostream>
using namespace std;
class atm {
	public:
		int password;
		int choice;
		char name;
		string username;
		int phone_no;
		void hi() {
			system("color C2");
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t========================================="<< endl;
			cout<<"\t\t\t\t    ========================================="<< endl;
			cout<<"\t\t \t\t         ||   WELCOME TO ABC PORTAL   ||"<< endl;
			cout<<"\t\t \t\t\t   ========================================="<< endl;
			cout<<"\t\t \t\t\t  ========================================\n\n"<< endl;
			cout<<"\t\t\t\t\t\t PLEASE LOGIN/SINUP";
			user();


		}
		void user() {
			while(1) {
				cout<<"\n 1.LOGIN \n 2.SINUP(if new user please create your account )"<<endl;
				cin>>choice;
				switch(choice) {
					case 1:
						cout<<"\n PLEASE FILL THE DETAILS\n";
						cout<<"\n enter your username or phone number\n";
						cin>>username;
						cout<<"enter your password";

						cin>>password;

						if(password==12345 || username=="priyanshi") {
							user1();
							break;
						}

						else if(password==3456|| username=="prishi ") {
							user2();
							break;
						} else if(password==90123|| username=="rahul") {
							user3();
							break;
						} else if(password==56789|| username=="utkarsh" ) {
							user4();
							break;
						} else {
							cout<<"insert wrong detail";
						}
					case 2:
						cout<<"enter your name";
						cin>>name;
						cout<<"create your password ";
						cin>>password;
						cout<<"username "<<endl;
						cin>>username;
						cout<<" your welcome \n" <<"name"<<" \n now are member of your group";

						break;


				}
				cout<<"\n"<<endl;
			}
		}


		void user1() {
			cout<<"\t\t \t\t         ||   WELCOME TO ABC PORTAL   ||"<< endl;
			cout<<"hello priyanshi"<<endl;
			cout<<"your credit points is 40 "<<endl;
			cout<<"\n"<<endl;
		

		}
		void user2() {
			cout<<"\t\t \t\t         ||   WELCOME TO ABC PORTAL   ||"<< endl;
			cout<<"hello prishi"<<endl;
			cout<<"your credit points is 41 "<<endl;
			cout<<"\n"<<endl;
		}
		void user3() {
			cout<<"\t\t \t\t         ||   WELCOME TO ABC PORTAL   ||"<< endl;
			cout<<"hello rahul"<<endl;
			cout<<"your credit points is 42 "<<endl;
			cout<<"\n"<<endl;
		}
		void user4() {
			cout<<"\t\t \t\t         ||   WELCOME TO ABC PORTAL   ||"<< endl;
			cout<<"hello utkarsh"<<endl;
			cout<<"your credit points is 44 "<<endl;

			cout<<"\n"<<endl;
		}






};

int main() {

	atm h1;

	h1.hi();
}


