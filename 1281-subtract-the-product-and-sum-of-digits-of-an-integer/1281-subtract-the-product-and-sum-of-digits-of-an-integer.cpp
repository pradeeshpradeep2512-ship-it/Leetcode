class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1;
        int sum=0;
        int c;
        while(n!=0){
            c=n%10;
            n=n/10;
            pro=pro*c;
            sum=sum+c;
        }
        return pro-sum;
    }
};