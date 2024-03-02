#Power of Two
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 1) {
            return true;
        }
        int i=0;
        int ans=0;
        while(i<=30){
            ans = pow(2, i);
            if(ans==n){
            return true;
        }
            i++;
        }
        
        
        return false;
        
    }
};
