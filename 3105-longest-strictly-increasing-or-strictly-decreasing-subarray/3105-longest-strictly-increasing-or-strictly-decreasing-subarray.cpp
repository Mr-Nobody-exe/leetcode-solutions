class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int c1 = 0, c2 = 0;
        int ans = 0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                c1++;c2=0;
                ans = max(ans,c1);
            }
            if(nums[i]<nums[i+1]){
                c2++;c1=0;
                ans = max(ans,c2);
            }
            if(nums[i]==nums[i+1]){
                c1=0;c2=0;
            }
        }
        return ans+1;
    }
};