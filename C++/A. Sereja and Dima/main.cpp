#include <iostream>

using namespace std;

int main()
{
    int n;
    int arr[1000];
    int sum1=0,sum2=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int left=0,right=n-1;
     for(int i=0;i<n;i++)
    {
        if (i % 2 == 0) {

         if (arr[left] > arr[right])
            {
                sum1 += arr[left];
                left++;
            }
            else
            {
                sum1 += arr[right];
                right--;
            }
        }else {
           if (arr[left] > arr[right])
        {
                sum2 += arr[left];
                left++;
        }
        else
        {
                sum2 += arr[right];
                right--;
        }
        }


    }
    cout << sum1 << endl;
    cout << sum2 ;
    return 0;
}
