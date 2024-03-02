#Number of notes (100, 50, 20 and 1) required for the input amount
#include<iostream>
using namespace std;
int main(){
    int n, a;
    cout<<"Enter the amount";
    cin>>n;
    int note100, note50, note20, note1;
    cin>>a;
    switch(a){
        case 1:
        note100=n/100;
        cout<<"Total notes required of 100 is: "<<note100<<endl;
        note100=n-(note100*100);
        case 2:
        note50= note100/50;
        cout<<"Total notes required of 50 is: "<<note50<<endl;
        note50=note100-(note50*50);
    
        case 3:
        note20= note50/20;
        cout<<"Total notes required of 20 is: "<<note20<<endl;;
        note20=note50-(note20*20);
        
        case 4:
        note1= note20/1;
        cout<<"Total notes required of 1 is: "<<note20<<endl;
        
    }
}
