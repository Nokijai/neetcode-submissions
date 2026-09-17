class Solution {
public:
    map<char, int> freq_s, freq_t;
    bool includes() {
        for (auto [key, val] : freq_t) {
            if (freq_s[key] < val) return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        for (char c : t) {
            freq_t[c]++;
        }
        int n = s.length();
        int start = -1, len = n + 1;
        int i = 0, j = 0;
        while (i < n && j < n) {
            while (j < n && !includes()) {
                freq_s[s[j]]++;
                j++;
            }
            while (i < j && includes()) {
                freq_s[s[i]]--;
                i++;
            }
            if (len > j - i + 1) {
                start = i - 1;
                len = j - i + 1;
            }
            cout << i << " " << j << "\n";
        }
        if (start == -1) return "";
        return s.substr(start, len);
    }
};
