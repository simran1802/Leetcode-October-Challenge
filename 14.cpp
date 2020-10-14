class Solution {
public:
    int rob(vector<int>& nums) {
        const int n = nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        else
            return max(robber(nums,0,n-1), robber(nums,1,n));
    }
    int robber(vector<int>& nums,int begin,int end){
        int ans = 0;
      int pre0 = 0, pre1 = 0;
      for (int i = begin; i < end; ++ i) {
        int ans0 = max(pre0, pre1);
        int ans1 = pre0 + nums[i];
        ans = max({ans0, ans1, ans});
        pre0 = ans0;
        pre1 = ans1;
      }
      return ans;
    }
};
