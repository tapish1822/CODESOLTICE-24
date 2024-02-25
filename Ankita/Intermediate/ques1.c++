// https://leetcode.com/problems/majority-element/

Solution: 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1 ;
        int n = nums.size() ;
        int ans ;

        if(n == 1)
            return nums[0] ;

        for(int i=0 ; i<n-1 ; i++)
        {
            count = 1 ;
            for(int j=i+1 ; j<n ; j++)
            {
                if(nums[i] == nums[j])
                {
                    count++ ;
                }
            }

            if(count>n/2)
            {
                ans = nums[i] ;
                break ;
            }                
        }
        return ans ;
    }
};