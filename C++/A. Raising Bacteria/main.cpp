#include <iostream>

using namespace std;

int main()
{
    int x,counter=0;
    cin>>x;

        while(x>0)
        {
            counter+=x%2; //Add one if number is odd
            x/=2;
        }


    cout << counter;
    return 0;
}
