class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int n = arr.size()-1;
        int high = n;
        int mid;
        while(low<high){
            mid = low + (high - low)/2;
            if(arr[mid]<arr[mid+1]){
                low = mid+1;
            }
            else{
                high= mid;
            }
        }
        return low;
    }
};
