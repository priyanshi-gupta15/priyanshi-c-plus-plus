#include <iostream>
using namespace std;
int hi(int clgfees ,int fine=2)
{
    return clgfees * fine;

}
int main ()
{
    int user1;
    cout<<"enter the no"<<endl;
     cin>>user1;
     cout<<"this is your clg fees with fine"<<hi(user1)<<endl;
     

}

