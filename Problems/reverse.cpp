//Program to print reverse of an array
#include<iostream>
using namespace std;
void reverseArr(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[5]={12, 34, 56, 78, 910};
    cout<<"Reversed Array is: ";
    reverseArr(arr, 5);
    int i =0;
    cout<<"[";
    while(i<5){
        cout<<arr[i]<<" ";
        i++;
    }

}
// #include<iostream>
// using namespace std;
// void reverseArr(int arr[], int size){
//     int i =size-1;
//     cout<<"Reversed Array is: ";
//     cout<<"[";
//     while(i>=0){
//         cout<<arr[i]<<" ";
//         i--;
//     }
//     cout<<"]\n";
    
// }
// int main(){
//     int arr[6];
//     for(int i = 0; i<6; i++){
//         cout<<"Enter the value of index: "<<i<<endl;
//         cin>>arr[i];
//     }
//     reverseArr(arr, 6);

// }
