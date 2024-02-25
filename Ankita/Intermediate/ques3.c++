// https://leetcode.com/problems/largest-number-at-least-twice-of-others/description/ 

// Solution : 

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = *max_element(nums.begin(), nums.end()) ;
        int index ;
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(nums[i] == max)
                index = i ;
            if(nums[i] != max && max < nums[i]*2 )
            {
                return -1 ;
            }
        }
        return index ;
    }
};