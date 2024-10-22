class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int l = 0;
        int r = 0;
        while (r < g.size() && l < s.size()) {
            if (g[r] <= s[l]) {
                r++;
            }
            l++;
        }
        return r;
    }
};