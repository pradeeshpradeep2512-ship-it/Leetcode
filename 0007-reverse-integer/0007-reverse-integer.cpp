class Solution {
public:
    int reverse(int x) {
        int count=0;
        int arr[100];
        int temp=x;
        while(temp!=0){
            count++;
            temp=temp/10;
        }
        int i=0;
        temp=x;
         while(temp!=0){
            int n = temp%10;
            arr[i]=n;
            i++;
            temp=temp/10;
        }
        int res=0;
        for(int i=0;i<count;i++){
         if ((res > INT_MAX / 10) || (res < INT_MIN / 10)){
            return 0;
         }
           res=res*10+arr[i];
        } 
        return res;
    }
};