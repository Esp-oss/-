class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans = 1;
        int cnt = 1;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1] + 1) {//如果为顺序则cnt记录+1
                cnt++;
            }
            else {
                cnt = 1;//否则归1从当前位置重新计算
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};