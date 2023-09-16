class Solution {
public:
    void sortColors(vector<int>& nums) {
        int temp,min, size = nums.size();
        for(int i=0; i<size-1; i++)
        {
            min = i;
            for (int j = i+1; j<size; j++)
            {
                if(nums[min]>nums[j])
                {
                    min = j;
                }
            }

            if(min!=i)
            {
                temp = nums[min];
                nums[min] = nums[i];
                nums[i] = temp;
                
                
            }
            
        }
        for(int i=0; i<size; i++)
        {
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        
    }
};