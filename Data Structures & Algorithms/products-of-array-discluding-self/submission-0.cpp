class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> products;
        int prod = 1;
        int prod0 = 1;
        int zeroCnt = 0;
        for(int n : nums){
            if(n == 0 && zeroCnt == 0){
                zeroCnt++;
            }else{
                prod *= n;
            } 
        }
        prod0 = prod;
        for(int s : nums){
            if(zeroCnt){
                prod = 0;
            }
            if(s == 0){
                products.push_back(prod0);    
            }else{
                products.push_back(prod / s);
            }
        }
        return products;
    }
};
