class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
         int n = nums.size();
        int low = 0;
        vector<int> ans;
        multiset<int> window;

        for (int high = 0; high < n; high++) {
            window.insert(nums[high]);

            if (high - low + 1 > k) {
                window.erase(window.find(nums[low]));
                low++;
            }

            if (high - low + 1 == k) {
                ans.push_back(*window.rbegin());
            }
        }

        return ans;
    }
};