class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;

        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        int leftSum = 0, rightSum = totalSum;

        for (int i = 0; i < n; i++) {
            rightSum -= nums[i];

            if (leftSum == rightSum) {
                ans = i;
                break; // exit loop if pivot index is found
            }

            leftSum += nums[i];
        }

        return ans;
    }
};
