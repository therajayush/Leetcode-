class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
        int mask =0;
        if(n==0){
            return 1;
        } // Take care of the edge value
        while(m!=0){
            mask=(mask<<1) | 1;
            m=m>>1;
        }
        int ans=(~n) & mask;
        return ans;
   
    }
};
