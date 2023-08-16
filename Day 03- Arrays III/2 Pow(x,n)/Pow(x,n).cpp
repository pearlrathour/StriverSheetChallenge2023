class Solution {
public:
    double solve(double x, int n){
        if(n==0)
            return 1;
        double temp=myPow(x,n/2);
        temp=temp*temp;
        if((n&1) == 0)
            return temp;
        else
            return x*temp;
    }
    double myPow(double x, int n) {
        double ans=solve(x,abs(n));
        if(n<0)
            return 1/ans;
        return ans;
    }
};