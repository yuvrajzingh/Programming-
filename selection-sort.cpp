#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the size of the array : ";
    int n; 
    cin>>n;

    cout<<"Enter the elements: ";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout<<"Sorted array : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}