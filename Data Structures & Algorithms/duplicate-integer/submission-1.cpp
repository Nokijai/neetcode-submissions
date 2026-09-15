class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int , int> check_duplicated;
        for(int num : nums){
            if(check_duplicated.count(num)) return true;
            check_duplicated[num]++;
            continue;
        }
        return false;
    }
};