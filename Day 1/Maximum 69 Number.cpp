'''
  You are given a positive integer num consisting only of digits 6 and 9.
  Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).

  Input: num = 9669
  Output: 9969
'''

// Brute Force

class Solution {
public:
    int maximum69Number (int num) {
        int temp=num, count=0;
        while(temp)
        {
            temp/=10;
            count++;
        }
        int dec=pow(10,(count-1));
        int new_num=0;
        bool flag=0;

        while(num)
        {
            int temp=num/dec;
            num%=dec;
            dec/=10;

            if(flag==0 && temp==6)
            {
                temp=9;
                flag=1;
            }

            new_num=(new_num*10)+temp;
        }

        return new_num;
    }
};


// Optimal

class Solution {
public:
    int maximum69Number (int num) {
        string x=to_string(num);
        for(int i=0; i<(int)x.size();i++)
        {
            if(x[i]=='6')
            {
                x[i]='9';
                break;
            }
        }
        int ans=stoi(x); // stoi (string to integer)
        return ans;
    }
};
