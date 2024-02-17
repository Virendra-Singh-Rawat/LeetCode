class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                c++;
                ans = max(ans,c);
            }
            else{
                c=0;
            }
        }
        if(ans == INT_MIN){
            return 0;
        }
        else{
            return ans;
        }
    }
};