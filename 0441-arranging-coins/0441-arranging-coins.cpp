class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        int m=1;
        if(n==0)
        return 0;
        while(m<=n){
            n=n-m;
            m=m+1;
            count++;
        }
        return count;
    }
};