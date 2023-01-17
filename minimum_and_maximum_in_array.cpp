#include<iostream>//header file
using namespace std;

int main(){
    int size;//size of the array
    cout<<"Enter the size of array "<<endl;
    cin>>size;
    int arr[size];//declaring an array of size size

    //taking the input into array
    for(int i=0;i<size;i++){
        cout<<"Enter the element number "<<i<<" :";
        cin>>arr[i];
    }

    int mx=arr[0];//declaring a variable mx so that we can compare it with all the elements of array
    int mn=arr[0];//declaring a variable mn so that we can compare it with all the elements of array


    //if "if statement will be true then that value will be updated to mx"
    for(int i=0;i<size;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }


    //if "if statement will be true then that value will be updated to mn"
    for(int i=0;i<size;i++){
        if(arr[i]<mn){
            mn=arr[i];
        }
    }

    cout<<"Maximum value is: "<<mx<<endl;
    cout<<"Minimum value is: "<<mn<<endl;
}