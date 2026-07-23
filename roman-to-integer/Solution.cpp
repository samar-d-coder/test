            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            if (i < s.length() - 1 && value[s[i]] < value[s[i + 1]])
                ans -= value[s[i]];
            else
                ans += value[s[i]];
        }
            {'L', 50},
            {'X', 10},
            {'I', 1},
            {'V', 5},
        unordered_map<char, int> value = {
    int romanToInt(string s) {
public:
class Solution {
