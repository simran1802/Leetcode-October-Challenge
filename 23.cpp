class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int s3 = INT_MIN;
        stack<int> stk;
        int n = nums.size();
        for(int i=n-1;i>=0;i--){
            if(s3 > nums[i])
                return true;
        else
            while(!stk.empty() && nums[i]>stk.top()){
                s3 = stk.top();
                stk.pop();
            }
            stk.push(nums[i]);
        }
        return false;
    }
};
