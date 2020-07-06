class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int k = digits.size() - 1;
        while(k>=0)
        {
            if(digits[k]==9)
            {
                digits[k]=0;
                 
            }
            
            else {
                digits[k]+=1;
                return digits;
            }
                       
         k--;
        }
        
        digits.insert(digits.begin(),1);
        return digits;
    }
};