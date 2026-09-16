class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int length = 0;
        int freq = 0;

        int count[26] = {0};
        for(int right = 0; right < s.size() ; right++){
            count[s[right] - 'A']++;
            freq = max(freq, count[s[right] - 'A']);

            if((right - left + 1) - freq > k){
                count[s[left] - 'A']--;
                left++;
            }

            length = max(length , right - left + 1);
        }

        return length;
    }
};
