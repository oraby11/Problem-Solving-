#include <iostream>

using namespace std;
long int  Fibonacci_numbers(long int n,long int k)
{

    long int current,t1=0,t2=1;
    if (n==0 || n==1)
        return n;
    else
    {
       for(int i=2;i<=n;i++)
        {
            current=t1+t2;
            t1=t2;
            t2=current;
        }
    }

}

int main()
{
    long int c,n,k;
    cin>>c;
    for(int i=0;i<c;i++)
    {
        cin>>n;
        cin>>k;
        cout<<Fibonacci_numbers(n,k)  <<endl;

    }



    return 0;
}
