class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        sort(candidates.begin(),candidates.end());
        vector<int> combinations;
        helper(candidates,target,res,combinations,0);
        return res;
    }
        
        private:
            void helper(vector<int>& candidates, int target,vector<vector<int>> &res,vector<int> &combinations,int begin){
                if(!target){
                    res.push_back(combinations);
                    return;
                    
                }
                for(int i=begin;i != candidates.size() && target>=candidates[i];++i){
                    combinations.push_back(candidates[i]);
                    helper(candidates,target-candidates[i],res,combinations,i);
                    combinations.pop_back();
                }
            }
        
};
