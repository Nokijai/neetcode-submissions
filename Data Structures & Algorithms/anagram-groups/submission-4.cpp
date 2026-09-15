class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> encode_mapper;
        vector<vector<string>> ans;
        for(string str: strs){
            int count[26] = {0};
            for(char c : str){
                count[c - 'a']++;
            }

            string key = "";
            for(int num: count){
                key += '#' + to_string(num);
            }

            encode_mapper[key].push_back(str);
        }

        for(auto &[key , value]: encode_mapper){
            ans.push_back(value);
        }

        return ans;


    }
};
