class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int p) {
        sort(tokens.begin(),tokens.end());
        int i=0,score=0;
        int j = tokens.size();
        while(i<j){
            if(p>=tokens[i])
            {
            p=p-tokens[i];
            score++;
            i++;
            }
            else if(i<j-1 && score>=1)
            {
            j=j-1;
            p=p+tokens[j];
            score--;
            }
            else
            return score;
            }
            return score;
    }
};
