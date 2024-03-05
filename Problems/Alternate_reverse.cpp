//This program prints reverse of alternate elements present in the array
#include<iostream>
using namespace std;
void altRev(int arr[], int size){
    int i = 0;
    while(i<size-1){
        swap(arr[i], arr[i+1]);
        i+=2;  
    }
}
int main(){
    int arr[6]={12, 34, 56, 78, 90, 99};
    cout<<"Alterneted Reversed array: ";
    altRev(arr, 6);
    for(int i =0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}
