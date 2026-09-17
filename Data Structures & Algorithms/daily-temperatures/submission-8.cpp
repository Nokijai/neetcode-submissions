class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n , 0);
        int highest = 0;

        for(int i = n - 1 ; i >= 0 ;i--){
            if(temperatures[i] >= highest){
                highest = temperatures[i];
                continue;
            }

            int day = 1;
            while(temperatures[i + day] <= temperatures[i]){
                day += ans[i + day];

            }
            ans[i] = day;
        }

        return ans;


    }
};
