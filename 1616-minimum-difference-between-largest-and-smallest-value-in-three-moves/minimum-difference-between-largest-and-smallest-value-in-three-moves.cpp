class Solution {
public:
    int minDifference(vector<int>& nums) {
            int n = nums.size();
         if(n<=4)
         {
            return 0;
         }
         sort(nums.begin(), nums.end());
        int res=INT_MAX;
        // 0 1 5 10 14 17
        res=min(res,nums.back()-nums[3]); // 7
        res=min(res,nums[n-4]-nums[0]);//5
        res=min(res,nums[n-2]-nums[2]);//(5,14-5)//5
        res=min(res,nums[n-3]-nums[1]);// (5,10-1)//5
        return res;
    }
};