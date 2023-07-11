'''
  You are climbing a staircase. It takes n steps to reach the top.

  Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

  Input: n = 2
  Output: 2

  Input: n = 3
  Output: 3
'''

  //Basically it's a fibonacci

class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
            return 1;
        if (n==2)
            return 2;
        int f=1, s=2;
        
        for(int i=3; i<=n; i++)
        {
            s=f+s;
            f=s-f;
        }
        return s;
    }
};
