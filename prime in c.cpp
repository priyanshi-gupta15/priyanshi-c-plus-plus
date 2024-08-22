#include <iostream>

using namespace std;

int main() {

    int j, i, n, sum = 0;


    cout << "enter the numebr to find the sum of prime no ";
    cin >> n;

   for(i=2; i<=n; i++)
    {
        int Prime = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                Prime = 0;
                break;
            }
        }

        if(Prime==1)
        {
            sum += i;
        }
    }


    cout << endl << "Sum of all prime numbers upto " << n<<"\tis\t"<< sum;

}
