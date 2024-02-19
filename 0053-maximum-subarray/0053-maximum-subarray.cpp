class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        long long s = 0;
        long long ans = LONG_MIN;
        for(int i=0;i<n;i++){
            s+=nums[i];
            if(s>ans){
                ans=s;
            }
            if(s<0){
                s=0;
            }
        }
        return ans;
    }
};