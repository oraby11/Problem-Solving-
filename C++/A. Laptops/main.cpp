#include <iostream>

using namespace std;

int main()
{
    int n,a[n],b[n],i=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
     if(a[i]<a[i+1] && b[i]>b[i+1])
        {
            cout<<"Happy Alex" ;

        }
        else
        {
             cout<<"Poor Alex" ;
        }
    return 0;
}
