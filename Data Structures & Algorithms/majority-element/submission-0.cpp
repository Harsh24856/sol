class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int num:nums){
            mp[num]++;
        };
        int ans=-1;
        for(auto&[a,b]:mp){
            if(b>n/2){
                ans=a;
            }
        }
        return ans;
    }
};