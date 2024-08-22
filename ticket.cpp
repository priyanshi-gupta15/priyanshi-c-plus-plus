#include<iostream>
#include<fstream>
using namespace std;
ofstream myfile("ticket.txt");
class hello{
		
	public:
		
		int i,age,n, ch;
		string  name,show;
		int ticket() {
			system("color A7");

			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t========================================="<< endl;
			cout<<"\t\t\t\t    ========================================="<< endl;
			cout<<"\t\t \t\t ||   WELCOME TO ABC cinema   ||"<< endl;
			cout<<"\t\t \t\t\t   ========================================="<< endl;
			cout<<"\t\t \t\t\t  ========================================\n\n"<< endl;
			cout<<"\t\t\t\t\t\t ";



			cout<<"select show"<<endl;
			cout<<"enter the choice \n 1.abc show \n 2.pop show\n 3.marvel \n 4.k-drama \n";
			cin>>ch;
			switch(ch) {
				case 1 :
					cout<<"number of ticket"<<endl;
					cin>>n;
					for(int i=1; i<=n; i++) {
						cout<<"enter your name"<<endl;
						cin>>name;
						
						myfile<<"\t\t \t\t\t\t ========================================\n\n"<< endl;
						myfile<<"\t\t \t\t|| WELCOME TO ABC cinema   ||"<< endl;
						myfile<<"name:"<<name<<endl;
						myfile<<"show:abc-show"<<endl;
						myfile<<"\t\t\t enjoy your show"<<endl;
						myfile<<"\t\t \t\t\t\t ========================================\n\n"<< endl;

					}
					myfile.close();
					break;
				case 2:
					cout<<"number of ticket"<<endl;
					cin>>n;
					for(int i=1; i<=n; i++) {
						cout<<"enter your name"<<endl;
						cin>>name;
						myfile<<"\t\t \t\t\t\t========================================\n\n"<< endl;
						myfile<<"\t\t \t ||   WELCOME TO ABC cinema   ||"<< endl;
						myfile<<"name:"<<name<<endl;
						myfile<<"show:pop-show"<<endl;
						myfile<<"\t\t\t enjoy your show"<<endl;
						myfile<<"\t\t \t\t\t\t========================================\n\n"<< endl;

					}
					myfile.close();
					break;
				case 3 :
					cout<<"number of ticket"<<endl;
					cin>>n;
					for(int i=1; i<=n; i++) {
						cout<<"enter your name"<<endl;
						cin>>name;
						myfile<<"\t\t \t\t\t  ========================================\n\n"<< endl;
						myfile<<"\t\t \t\t         ||   WELCOME TO ABC cinema   ||"<< endl;
						myfile<<"name:"<<name<<endl;
						myfile<<"show:marvel"<<endl;
						myfile<<"\t\t\t enjoy your show"<<endl;
						myfile<<"\t\t \t\t\t  ========================================\n\n"<< endl;

					}
					myfile.close();
					break;
				case 4:
					cout<<"number of ticket"<<endl;
					cin>>n;
					for(int i=1; i<=n; i++) {
						cout<<"enter your name"<<endl;
						cin>>name;
						myfile<<"\t\t \t\t\t  ========================================\n\n"<< endl;
						myfile<<"\t\t \t\t         ||   WELCOME TO ABC cinema   ||"<< endl;
						myfile<<"name:"<<name<<endl;
						myfile<<"show:k drama"<<endl;
						myfile<<"\t\t\t enjoy your show"<<endl;
						myfile<<"\t\t \t\t\t  ========================================\n\n"<< endl;

					}
					myfile.close();
					break;

			}


		}

};
int main() {
	hello object;
	object.ticket();

}
