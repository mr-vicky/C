#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)   //Defining a function for Linear search
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}


int main(){
    
    int n; // taking te size of array from the user
    cout<<"Enter the size of array: ";
    cin>>n;
      
     
    int arr[n]; // defining the array
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<n;i++) // taking the elements of array from user as input
    {
        cin>>arr[i];
    }
    
    int key;  //  taking the key from user
    cout<<"Enter the key you wanna search: ";
    cin>>key;
    
    cout<<linearSearch(arr,n,key)<<endl;  //  Calling the function
    
    return 0;
}
