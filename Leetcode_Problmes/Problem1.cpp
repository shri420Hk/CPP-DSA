//Substract the product and sum of Digits of a given number
class solution{
public:
    int substractProductandSum(int n){
        int product = 1;
        int sum = 0;
        while(n!=0){
            int digit = n%10;
            int product = digit * product;
            int sum = digit+ sum;
            n = n/10;
        }
        int substract = product-sum;
        return substract;
    }


};
