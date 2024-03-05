#include<iostream>
using namespace std;
void tripSum(int arr[], int size){
    int sum = 0;
    int i = 0;
    while(i<size){
       cout<<arr[i]<<"+"<<arr[i+1]<<"+"<<arr[i+2]<<"="<<arr[i]+arr[i+1]+arr[i+2]<<" ";
       i+=3;
    }
}
int main(){
    int arr[12]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    cout<<"Sum of triplets: [ ";
    tripSum(arr, 12);
    cout<<"]";
}
