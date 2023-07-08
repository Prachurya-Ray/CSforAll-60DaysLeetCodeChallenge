'''
  Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n.


    Input: n = 5
    Output: 10

    Input: n = 6
    Output: 6
'''

  

//Brute Force

class Solution {
public:
    int smallestEvenMultiple(int n) {
        int start=(n>2)?n:2;
        for(;start<n*2;start++)
        {
            if(start%n==0 && start%2==0)
                return start;
        }
        return start;
    }
};



//Optimal

class Solution {
public:
    int smallestEvenMultiple(int n) {
        return (n%2==0) ? n: 2*n; 
    }
};
