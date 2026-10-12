class Solution {
public:
   void mul(vector<int>& ans,string num1, string num2){
        
        for(int i=0;i<num2.size();i++){
            for(int j=0;j<num1.size();j++){
                int sum = ans[i+j] + (num2[i]-'0')*(num1[j]-'0');
                ans[i+j] = sum % 10;
                ans[i+j+1] += sum / 10;
            }  
        }
        
    }
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0")return "0";
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        vector<int> ans(num1.size()+num2.size(),0);
        mul(ans,num1,num2);
        while(ans.size() > 1 && ans.back() == 0) ans.pop_back();
        string sol="";
        for(int i = ans.size() - 1; i >= 0; i--){
            sol += to_string(ans[i]);
        }
        return sol;
    }
};