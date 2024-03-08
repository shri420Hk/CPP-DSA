#include <bits/stdc++.h>
#include<iostream>
#include <vector>
#include <utility> 

using namespace std;

vector<vector<int>> pairSum(const vector<int>& arr, int s) {
    vector<vector<int>> result;
    int size = arr.size();

    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] + arr[j] == s) {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                result.push_back(temp);
               
            }
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {4, 8, 7, 1, 2, 3};
    cout << "Pair Sum: ";
    vector<vector<int>> result= pairSum(arr, 5);
    return 0;
}
