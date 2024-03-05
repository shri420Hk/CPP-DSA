//program prints the some of two consecutive numbers or pairs
#include<iostream>
using namespace std;
void pairSum(int arr[], int size){
    int i = 0;
    int sum = 0;
    cout<<"[";
    while(i<size-1){
        sum = arr[i]+arr[i+1];
        cout<<arr[i]<<"+"<<arr[i+1]<<"="<<sum<<" ";

        // i++;
        i+=2;
    }
    cout<<arr[size-1];
    cout<<"]";
}
int main(){
    int arr[6]={1, 2, 3, 4, 5, 6};
    cout<<"Sum of the pair elements present in the array: ";
    pairSum(arr, 6);
}
