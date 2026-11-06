class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre=1;
        int suff=1;
        vector<int>ans(nums.size(),1);
        for(int i =0;i<nums.size();i++)
        {
        ans[i]=pre;
        pre=pre*nums[i];
        }
        for(int j =nums.size()-1;j>=0;j--)
        {
            ans[j]*=suff;
            suff=suff*nums[j];
        }
        return ans;
    }
};
