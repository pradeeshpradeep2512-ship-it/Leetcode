class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=nums.size()-1;
        int i=0;
        while(i <= k)
{
    if(nums[i] == val)
    {
        swap(nums[i], nums[k]);
        k--;
    }
    else
    {
        i++;
    }
}

return k + 1;
    }
};