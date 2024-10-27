#include <iostream>
#include <map>
using namespace std;
/*
int SameDifferences(int *arr,int size)
{
    int counter=0;
    int i=0,j=1;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {

            if(arr[j]-arr[i]==j-i)
            {
                counter++;
            }
        }
    }
    return counter;
}
*/
// Function to count valid pairs
int SameDifferences(int *arr, int size) {
    //const long  int OFFSET = size; // Offset to handle negative differences
    long long  int counter = 0;

    // Two arrays to count frequencies (size * 2 to account for negative differences)
       // Use a map to count frequencies of differences
   map<long int, long int> freq;

    for (int i = 0; i < size; i++) {
        long  int diff = arr[i] - i;  // Compute arr[i] - i
        // Add the number of times this diff has been seen before
        counter += freq[diff];
        // Increment the frequency of this diff
        freq[diff]++;
    }

    return counter;
}
int main()
{
    int n,a;
    cin>>n;

    for(int c=0;c<n;c++)
    {
        cin>>a;
        int *arr = new int[a];
        for(int s=0;s<a;s++)
        {

            cin>>arr[s];
        }
        cout<<SameDifferences(arr,a)<<endl;
        delete[] arr;
    }

    return 0;
}
