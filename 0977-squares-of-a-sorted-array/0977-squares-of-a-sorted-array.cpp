class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            int ans = pow(nums[i],2);
            temp.push_back(ans);
        }
        sort(temp.begin(),temp.end());
        return temp;
    }
};