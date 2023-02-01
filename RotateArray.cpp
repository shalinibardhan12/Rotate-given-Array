#include<iostream>
using namespace std;
void PrintArray(int arr[] , int n)
{
    cout<<" array after rotation is "<<endl;
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void RotateArray(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i = n-1;i>0;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter the element in given array"<<endl;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"array before rotation is "<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    RotateArray(arr,n);
    PrintArray(arr ,n);
    return 0;
}