#include <vector>

class Solution {
public:
    vector<int> firstocc(vector<int> &arr, int key) {
        pair<int, int> p = {-1, -1};
        int low = 0;
        int high = arr.size() - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == key) {
                p.first = mid;
                high = mid - 1;
            } else if (arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return {p.first};
    }

    vector<int> lastocc(vector<int> &arr, int key) {
        pair<int, int> p = {-1, -1};
        int low = 0;
        int high = arr.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == key) {
                p.second = mid;
                low = mid + 1;
            } else if (arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return {p.second};
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        pair<int, int> p;
        p.first = firstocc(nums, target)[0];
        p.second = lastocc(nums, target)[0];
        return {p.first, p.second};
    }
};
