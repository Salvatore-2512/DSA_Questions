class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        

        for(int i=0; i<nums.size()-1; i++)
        {
            for(int j = 1+i; j<nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    return {i,j};
                    break;
                }
            }
        }
        
        return {};
    }
};