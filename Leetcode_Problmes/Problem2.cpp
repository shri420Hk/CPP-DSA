class Solution{
  public:
    int numBerofBits(uint32_t n){
        std::cin>>n;
        int count=0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n>>=1;
        }
        return count++;
}
