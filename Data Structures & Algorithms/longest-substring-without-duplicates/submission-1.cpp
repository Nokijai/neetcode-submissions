class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int> lastseen;

        int left = 0;
        int length = 0;

        for(int right = 0 ; right < s.size();right++){
            if(lastseen.count(s[right])){
                left = max(left , lastseen[s[right]] + 1);

            }

            lastseen[s[right]] = right;
            length = max(length , right - left + 1);

        }
        return length;
    }
};
