//In this problem we will use two pointer in which start will point to the first element of array
//and the end will point to the last element of array.We will traverse the array from both the ends and will swap 
//both the values and will increment the start by 1 and will decrease the end by -1 till start<end;

#include<iostream>
using namespace std;
//function to swap the values

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;

}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the element "<<i<<": ";
        cin>>arr[i];
    }

    int start=0;
    int end=size-1;

    while(start<end){
        swap(&arr[start],&arr[end]);
        start++;
        end--;
    }

    cout<<"Reversed array is :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


    
