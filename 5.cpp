class Solution {
public:
    int bitwiseComplement(int N) {
        
        // corner case
        if(N==0)
            return 1;
        
        int x=1;
        while(N>x)
            x = x*2 + 1;
        return x-N;
    }
};
