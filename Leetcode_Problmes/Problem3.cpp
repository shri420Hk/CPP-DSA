class Solution {
public:
    int reverse(int x) {
        int ans = 0;
    
        int i =0;
        while(x!=0){
            int a = x%10;
            if(ans<(INT_MIN/10)||ans>(INT_MAX/10)){
            return 0;
    }
            ans = (ans*10)+a;
            x = x/10;
            i++;
    }
    return ans;
    }
};
