class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i,j,n;
        n=nums.size();
        for(i=0;i<n;i++){
            int count=0;
        for(j=i;j<n;j++){
            if(nums[i]==nums[j])
            count++;
        }
          if(count>n/2){
              return nums[i];
          }
        
        }
        return -1;
    }
};