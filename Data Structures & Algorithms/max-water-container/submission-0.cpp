class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0,r=heights.size()-1;
        int best=0;
        while(l<r){
            int left=heights[l],right=heights[r];
            best=max(min(left,right)*(r-l),best);
            if(right>left){l++;}
            else{r--;}
        }
        return best;
    }
};
