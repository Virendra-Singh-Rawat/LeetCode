class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]==9){
            for(int i=n-1;i>=0;i--){
                if(digits[i]==9){
                    digits[i]=0;

                }
                else{
                    digits[i]++;
                    return digits;
                }

            }
            digits.insert(digits.begin(),1);
        }
        else{
            digits[n-1]++;
        }
        return digits;
    }
};