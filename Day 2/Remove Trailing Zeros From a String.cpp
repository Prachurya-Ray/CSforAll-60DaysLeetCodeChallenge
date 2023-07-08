'''
  Given a positive integer num represented as a string, return the integer num without trailing zeros as a string.

  Input: num = "51230100"
  Output: "512301"

  Input: num = "123"
  Output: "123"
'''

//Brute Force

class Solution {
public:
    string removeTrailingZeros(string num) {
        int s=num.size();
        while(true)
        {
            if(num[s-1]=='0')
            {
                num.erase(s-1);
                s--;
                continue;
            }
            break;
        }
        return num;
    }
};

//Optimal

class Solution {
public:
    string removeTrailingZeros(string num) {
        int i=num.size()-1;
        while(i>=0 && num[i]=='0')
            i--;
        return num.substr(0, i+1);
    }
};
