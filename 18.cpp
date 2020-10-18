class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int sz = prices.size();
        if(sz<2)
            return 0;
        if(k > sz/2){
            int ans=0;
            for(int i=1;i<sz;++i){
                ans += max(prices[i]-prices[i-1],0);
            }
            return ans;
            
        }
        int m[k+1];
        int n[k+1];
        for(int i=0;i<=k;++i){
            m[i] = INT_MIN;
            n[i] = 0;
            
        }
        int cur;
        for(int i=0;i<sz;++i){
            cur = prices[i];
            for(int j=k;j>0;--j){
                n[j] = max(n[j],m[j]+cur);
                m[j] = max(m[j],n[j-1]-cur);
            }
        }
        return n[k];
    }
};
