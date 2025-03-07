class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int ans=0;
        for(int i=n;i>=2;i--){
            if(nums[i]<nums[i-1]+nums[i-2]){
                int sum=nums[i]+nums[i-1]+nums[i-2];
                ans=max(ans,sum);
            }
        }
        return ans;
    }
};
