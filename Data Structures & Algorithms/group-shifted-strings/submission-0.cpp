class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> sol;
        for(string s : strings){
            string key = "";
            for(int i = 1; i < s.size(); i++){
                int diff = (s[i] - s[i - 1] + 26) % 26;
                key += to_string(diff) + ",";
            }
            mp[key].push_back(s);
        }
        for(auto it : mp){
            sol.push_back(it.second);
        }
        return sol;
    }
};