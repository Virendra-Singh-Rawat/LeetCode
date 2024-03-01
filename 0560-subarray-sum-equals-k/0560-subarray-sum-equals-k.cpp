class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();         
        int c = 0;        
        for(int i = 0; i < n; i++) 
        {
            int sum = arr[i];             
            if(sum == k) 
                c++;            
            for(int j = i + 1; j < n; j++) 
            {
                sum += arr[j];                 
                if(sum == k) 
                    c++; 
            }
            
        }        
        return c; 
    }
};