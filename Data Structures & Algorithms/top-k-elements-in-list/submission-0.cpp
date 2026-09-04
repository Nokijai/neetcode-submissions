class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans; 
        vector<vector<int>> freq(nums.size() + 1);
        unordered_map<int , int> count;
        for(int i : nums){
            count[i]++;
        }

        for(const auto&key : count){
            freq[key.second].push_back(key.first);
        }

        for(int i = freq.size() - 1; i > 0 ; --i){
                for(int n : freq[i]){
                    ans.push_back(n);
                    if(ans.size() == k){
                        return ans;
                    }
                }
            
        }
        return ans;
    }
};
