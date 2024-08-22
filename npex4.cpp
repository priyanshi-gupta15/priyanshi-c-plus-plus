#include <iostream>

using namespace std;

int main()
{
	int A[8] = {1, 0,0,1,1,0,0,1}, B[8] = {1,1,1,0,0,0,1,0},  C[8] = {} , o[8]={},  sum[9]={}, carry = 0;
	
	int i;
	for(i = 8; i >= 0; i--){
		if(i == 0){
		    C[i] = carry;
		}
		else{
		    C[i] = A[i - 1] + B[i - 1] + carry;
		    if(C[i] == 2){
		        C[i] = 0;
		        carry = 1;
		    }
		    else if(C[i] == 3){
		        C[i] = 1;
		        carry = 1;
		    }
		}
	}
	
	for( i = 0; i < 9; i++){
	    cout << C[i];
	}
	cout<<endl;
	
	cout<<"this is compliment"<<endl;
	
	for( i = 0; i < 9; i++){
	    if(C[i]==0)
	    {
	    	o[i]=1;
		}
		else
		{
			o[i]=0;
		}
		cout<<o[i];
	}
	cout<<endl;
	cout<<"this is ans"<<endl;
	
	for( i = 0; i < 9; i++){
          sum[i] = C[i]+o[i];
          cout<<sum[i];

	}
	
	
		
	
	
	
	
	
}

