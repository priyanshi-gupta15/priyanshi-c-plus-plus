#include<iostream>
using namespace std;
template<typename A> A mymax(A x,A y)
{return x>y?x:y;

}
int main(){
	cout<<mymax<int>(4,2)<<endl;
	cout<<mymax<double>(4.3,2.5)<<endl;
	cout<<mymax<char>('d','a')<<endl;
	
}