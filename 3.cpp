class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0)
            return 0;
        unordered_set<int> start;
        unordered_map<int,int> index;
        for(int i=0;i<nums.size();i++){
            if(index.count(nums[i]-k))
                start.insert(nums[i]-k);
            if(index.count(nums[i]+k))
                start.insert(nums[i]);
            index[nums[i]] += 1;
            
        }
        return start.size();
    }
};
