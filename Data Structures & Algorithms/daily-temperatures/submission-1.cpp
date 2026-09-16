class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int hottest = 0;
        vector<int> res(temperatures.size() , 0);
        for(int i = temperatures.size() - 1 ; i >= 0 ;i--){
            if(temperatures[i] >= hottest){
                hottest = temperatures[i];
                continue;
            }

            int day = 1;
            while(temperatures[i + day] <= temperatures[i])
                day += res[i + day];
            res[i] = day;
        }
        return res;
    }
};
