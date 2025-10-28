class Solution {
public:
    bool isPowerOfTwo(int n) {

      

       for(int i=0; i<=30; i++){
        int Num= pow(2,i);

        if(n==Num){
            return true;
        }
        
       }
       return false;
    }
};
