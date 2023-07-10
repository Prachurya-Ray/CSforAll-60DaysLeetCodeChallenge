'''
  You are given an array of strings words (0-indexed).

  In one operation, pick two distinct indices i and j, where words[i] is a non-empty string, and move any character from words[i] to any position in words[j].

  Return true if you can make every string in words equal using any number of operations, and false otherwise.

  Input: words = ["abcc","aabcc","bcc"]
  Output: true
'''


//This is only possible if the count of the character if multiple of the size of the array.

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int> num (26,0);
        for(auto x : words)
        {
            for(auto y : x)
                num[y-'a']++;
        }
        int n=words.size();
        for(auto x : num)
        {
            if(x%n != 0)
                return false;
        }
        return true;
    }
};
