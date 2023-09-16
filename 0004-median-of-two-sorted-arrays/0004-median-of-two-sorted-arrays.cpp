class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        queue<int> first;
        queue<int> second;
        

        int len = nums1.size() + nums2.size();

        vector<int> merged(len);

        for(int i = 0; i<nums1.size(); i++)
        {
            first.push(nums1[i]);
            

        }
        for(int i=0; i<nums2.size(); i++)
        {
            second.push(nums2[i]);
        }

        
        for(int i = 0; i<nums1.size() + nums2.size(); i++)
        {
            
            if(first.empty())
            {
                merged[i] = second.front();
                second.pop();
            }else if(second.empty())
            {
                merged[i] = first.front();
                first.pop();
            }else{
                if(first.front()<=second.front())
                {
                    merged[i] = first.front();
                    first.pop();

                }else{
                    merged[i] = second.front();
                    second.pop();
                } 
            }   
            
        }
        
        double ans = 0.0;
       
        if(len == 1 )
        {
            ans = merged[0];
        }else
        {
             if(len % 2 == 0){
                ans = (double)((merged[(len - 1) / 2] + merged[len / 2]) / 2.0);
                
            }else{ 
                ans = merged[(len)/2 ];
            }
        }
        return ans;
        
    }
    
};