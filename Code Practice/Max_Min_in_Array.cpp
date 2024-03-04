#Finding the Maximumm and Minimu in an Array
#include<iostream>
#include <climits>
using namespace std;
int maxNum(int arr[], int size){
    int max = INT_MIN;        //maximum = INT_MIN
    for(int i = 0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];    //we can use maximum = max(maximum , arr[i])
        }
    }
    return max;
}
int minNum(int arr[], int size) {
    int min = INT_MAX;        //minimum = INT_MAX
    for(int i = 0; i<size; i++){
        if(arr[i]<min){
            min = arr[i];   //we can use minimum = min(minimum, arr[i])
        }
    }
    return min;
}
void printArr(int arr[], int size){
    int i = 0;
    cout<<"[";
    while(i<5){
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<"]\n";
}
int main(){
    int arr[5];
    cout<<"Enter the array Elements: \n";
    for(int i = 0; i<5; i++){
        cout<<"Enter the value of Index: "<< i <<"\n";
        cin>>arr[i];
    }
    cout<<"Input array is: ";
    printArr(arr, 5); 
    int maximum = maxNum(arr, 5);
    cout<<"Maximum value in the array is: "<<maximum<<"\n";
    int minimum = minNum(arr, 5);
    cout<<"Minimum value in the array is: "<<minimum<<"\n";
}
