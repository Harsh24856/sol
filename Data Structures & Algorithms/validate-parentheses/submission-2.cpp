class Solution {
public:
    bool check(char start,char end){
        return((start=='(' && end==')')||(start=='[' && end==']')||(start=='{' && end=='}'));
    }
    bool isValid(string s) {
        stack<char> st;
        for(char ch:s){
            if(ch=='(' ||ch=='{'||ch=='['){
                st.push(ch);
            }
            else{
                if(st.empty()) return false;
                char start=st.top();
                if(check(start,ch)){
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return(st.empty()?true:false);
    }
};