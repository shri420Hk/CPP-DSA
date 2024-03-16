#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n = prices.size();
    // int mprofit = 0;
    // int max = INT_MIN;
    // for(int i =0; i<n-1; i++ ){
    //     for(int j = i+1; j<n; j++){
    //       if (prices[i] < prices[j]) {
    //         mprofit = prices[j] - prices[i];
    //       }
    //       if (mprofit>max){
    //         max = mprofit;
    //     }
    //     }
    // }
    // if(n==1){
    //     return 0;
    // } else {
    //     return max;
    // }
    int val = prices[0];
    int Mprofit = 0;
    if(n<=1){
      return 0;
    }
    for(int i = 1; i<n; i++){
      Mprofit = max(Mprofit, prices[i]-val);
      val = min(val, prices[i]);
    }
    return Mprofit;

    }
    
    

