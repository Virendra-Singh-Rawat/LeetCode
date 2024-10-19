class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int ans = 0;
        for(auto &it : s){
            mp[it]++;
        }
        bool oddFound = false;
        for(auto &it : mp){
            if(it.second % 2 ==0){
                ans+=it.second;
            }else{
                ans+=it.second-1;
                oddFound = true;
            }
        }
        if(oddFound){
            ans+=1;
        }
        return ans;
    }
};