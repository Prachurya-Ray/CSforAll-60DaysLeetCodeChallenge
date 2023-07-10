'''
  There is a function signFunc(x) that returns:

  1 if x is positive.
  -1 if x is negative.
  0 if x is equal to 0.
  You are given an integer array nums. Let product be the product of all values in the array nums.
'''

//We will not be directly multiplying as it will cause overflow.
    
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==0)
                return 0;
            if(nums[i]<0)
                count++;
        }
        return count&1?-1:1;        
    }
};
