class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prdt=1;
        
        int p = 1;
        int count = 0;
        
        
        int len = nums.size();
        
        for(int i=0; i<len; i++)
        {
            
            prdt = prdt*nums[i];
           
            if(nums[i]!=0)
            {
                p = p * nums[i];
                count++;
                
            }


           
        }
        
        
        
        vector<int> answer(len);
        if(prdt == 0)
        {
            
            for(int i=0; i<nums.size(); i++)
            {
                if(nums[i]!=0)
                {
                    answer[i] = 0;
                }
                else if(count == (len-1))
                {
                    answer[i] = p;
                }
                else{
                    answer[i] = 0;
                }
            }
        }else
        {
            for(int i=0; i<nums.size(); i++)
            {
                answer[i] = prdt/nums[i];
            }

        }
        return answer;
    
    }
};