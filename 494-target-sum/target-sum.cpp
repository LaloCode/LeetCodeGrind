class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) 
    {
        return exploreSums(nums, target, 0, 0);
    }

    int exploreSums(vector<int>& nums, int target, int index, int sum)
    {
        if (index > (nums.size() - 1))
        {
            if (sum == target) 
            {
                return 1;
            }
            return 0;
        }
        else
        {
            return exploreSums(nums, target, index + 1, sum + nums[index]) + exploreSums(nums, target, index + 1, sum - nums[index]);
        }
    }
};