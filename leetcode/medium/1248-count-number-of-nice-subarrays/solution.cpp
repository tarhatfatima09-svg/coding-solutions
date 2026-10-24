class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int low=0;
        int high=0;
        int count=0;
        int odd=0;
        int ans =0;
        for(int high=0;high<n;high++){
                if(nums[high]%2!=0){
                    odd++;
                }
                while(odd>k){
                    if(nums[low]%2!=0){
                        odd--;
                    }
                    low++;
                    count=0;
                }
                if(odd==k){
                    while(nums[low]%2==0){
                        count++;
                        low++;
                    }
                    ans +=count+1;
                }
        }
        return ans;

    }
};