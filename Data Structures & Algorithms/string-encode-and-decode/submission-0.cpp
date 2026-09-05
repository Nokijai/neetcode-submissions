class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(const auto& str : strs){
            ans.append(to_string(str.size()));
            ans.push_back('#');
            ans.append(str);
        }

        return ans;

    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }

            int length = stoi(s.substr(i , j - i));
            ans.push_back(s.substr(j + 1, length));
            i = j + 1 + length;
            
        }
        return ans;
    }
};
