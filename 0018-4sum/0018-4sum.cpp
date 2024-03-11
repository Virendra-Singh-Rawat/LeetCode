class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> temp;
        
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;
                
                // Pointers for the third and fourth elements of the quadruplet
                int k = j + 1;
                int l = n - 1;
                
                while (k < l) {
                    long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[k] + nums[l];
                    if (sum == target) {
                        vector<int> ans = {nums[i], nums[j], nums[k], nums[l]};
                        temp.push_back(ans);
                        
                        // Move the third pointer to the right and the fourth pointer to the left
                        k++;
                        l--;
                        
                        // Skip duplicates of the third and fourth elements
                        while (k < l && nums[k] == nums[k - 1])
                            k++;
                        while (k < l && nums[l] == nums[l + 1])
                            l--;
                    } 
                    // If the sum is less than the target, move the third pointer to the right
                    else if (sum < target) {
                        k++;
                    } 
                    // If the sum is greater than the target, move the fourth pointer to the left
                    else {
                        l--;
                    }
                }
            }
        }
        return temp;
    }
};