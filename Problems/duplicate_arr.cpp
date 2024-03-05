//The program prints the duplicate element present array
#include<iostream>
using namespace std;
int i = 0;
int j = 0;
void dupli(int arr[], int size){
    for(i=0; i<size-1; i++){
        for(j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
                cout<< arr[i]<<" ";
            }
            
        }
    }

}
int main(){
    int arr[6]={1, 2, 3, 4, 3, 4};
    cout<<"Duplicate element: [ ";
    dupli(arr, 6);
    cout<<"]";
}
