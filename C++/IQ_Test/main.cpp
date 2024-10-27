#include <iostream>

using namespace std;
#define  MAX 100
int main()
{
     int n,counter1=0,counter2=0;
     int arr[MAX];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0 || arr[i]==0)
        {
            //count even number
            counter1++;
        }
        else
        {
            //count odd number
            counter2++;
        }
    }
    int c1,c2;
    c1=counter1;
    c2=counter2;
    if(c1>c2)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                cout<<++i;
                return 0;
            }
        }
    }
    else if(c1<c2)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                cout<<++i;
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }


}
