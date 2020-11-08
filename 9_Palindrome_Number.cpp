#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        try
        {
            if (x < 0)
            {
                return false;
            }

            if (0 <= x && x <= 9)
            {
                return true;
            }
            else
            {
                string new_number = to_string(x);
                int i = 0, j = new_number.size() - 1;
                while (i < j)
                {
                    if (new_number[i++] != new_number[j--])
                    {
                        return false;
                    }
                }
                return true;
            }
        }
        catch (out_of_range ex)
        {
            return false;
        }
        return false;
    }
};

int main()
{
    Solution s;
    int n;
    cin >> n;
    cout << s.isPalindrome(n);

    return 0;
}

/*
9. Palindrome Number

Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Follow up: Could you solve it without converting the integer to a string?

 

Example 1:

Input: x = 121
Output: true



Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.



Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.



Example 4:

Input: x = -101
Output: false
 

Constraints:

-231 <= x <= 231 - 1
Accepted 1,056,928  Submissions 2,155,958







*/