class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int>sub;
    result.push_back(sub);
    for(int num : nums){
        int size = result.size();
        for(int i=0;i<size;i++){
            vector<int>v = result[i];
            v.push_back(num);
            result.push_back(v);
        }
    }
    return result;
    }
};