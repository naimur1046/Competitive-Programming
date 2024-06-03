class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        if(n==0)
        return {-1,-1};
        int left = 0, right = n - 1,lowerBound;
        lowerBound=0;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] >= target) {
                lowerBound = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        if (nums[lowerBound] != target)
            lowerBound = -1;

        left = 0, right = n - 1;
        int upperBound = n-1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] <= target) {
                upperBound = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        if (nums[upperBound] != target)
            upperBound = -1;
        return {lowerBound, upperBound};
    }
};
