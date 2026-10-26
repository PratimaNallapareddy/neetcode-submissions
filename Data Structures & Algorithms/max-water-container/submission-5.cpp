class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ti = heights.size() - 1;
        int bi = 0;
        int size = 0;
        while(ti > bi) {
            int tsize = 0;
            //cout<<heights[ti];
            if(heights[ti] > heights[bi]){
                tsize = heights[bi] * (ti-bi);
                bi++;
                //cout<<tsize;
            }else{
                tsize = heights[ti] * (ti-bi);
                //cout<<tsize;
                ti--;
            }
            if(tsize > size){
                size = tsize;
            }
        
        }
        return size;
        
    }
};
