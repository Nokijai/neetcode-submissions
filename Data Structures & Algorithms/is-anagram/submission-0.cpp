class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int> s_count;
        if(s.length() != t.length()) return false;
        for(int i = 0 ; i < s.length() ; i++){
                s_count[s[i]]++;
                s_count[t[i]]--;
            
        }

        for(const auto& pair: s_count){
            if(pair.second != 0) return false;
        }
        return true;
    }
};
