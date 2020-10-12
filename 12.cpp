class Solution {
public:
    bool buddyStrings(string A, string B) {
        int m = A.size();
        int n = B.size();
        if(m!=n || A.empty())
            return false;
        if(A==B && set<char>(A.begin(),A.end()).size() < m)
            return true;
        vector<int> ans;
        for(int i=0;i<m;i++)
            if(A[i]!=B[i])
                ans.push_back(i);
        
        return ans.size() == 2 && (A[ans[0]] == B[ans[1]] && A[ans[1]] == B[ans[0]]);
        
    }
};
