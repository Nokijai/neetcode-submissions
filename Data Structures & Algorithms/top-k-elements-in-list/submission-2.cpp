class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> freq(nums.size() + 1);
        vector<int> ans;
        unordered_map<int , int> count;
        for(int num: nums){
            count[num]++;
        }

        for(const auto& [key , value] : count){
            freq[value].push_back(key);
        }

        for(int i = freq.size() - 1 ; ans.size() < k ; i-- ){
            if(!freq[i].empty()){
                for(int num: freq[i]){
                    ans.push_back(num);
                }
            }
            
        }
        return ans;
    }
};
