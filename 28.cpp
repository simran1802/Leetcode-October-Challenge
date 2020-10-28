class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        if(nums.size()==0)
            return {};
        vector<string> res;
        for(int i=0;i<n;i++){
            int a=nums[i];
            while(i!=(n-1) && nums[i]==nums[i+1]-1)
                i++;
            int b = nums[i];
            if(a == b)
                res.push_back(to_string(a));
            else
                res.push_back(to_string(a) + "->" + to_string(b));
        }
        return res;
    }
};
