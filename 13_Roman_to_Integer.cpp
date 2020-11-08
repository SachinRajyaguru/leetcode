#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> roman_nums;
        roman_nums.insert(std::pair<char, int>('I', 1));
        roman_nums.insert(std::pair<char, int>('V', 5));
        roman_nums.insert(std::pair<char, int>('X', 10));
        roman_nums.insert(std::pair<char, int>('L', 50));
        roman_nums.insert(std::pair<char, int>('C', 100));
        roman_nums.insert(std::pair<char, int>('D', 500));
        roman_nums.insert(std::pair<char, int>('M', 1000));

        int real_number = 0;
        char prev_char = -1;
        for (char &c : s)
        {
            if ((c == 'V' || c == 'X') && prev_char == 'I')
            {
                real_number += (roman_nums[c] - 1);
            }
            else if ((c == 'L' || c == 'C') && prev_char == 'X')
            {
                real_number += (roman_nums[c] - 10);
            }
            else
            {
                real_number += roman_nums[c];
            }

            prev_char = c;
        }
        return real_number;
    }
};

int main()
{
    Solution s;
    cout << s.romanToInt("MCMXCIV");
    return 0;
}

/*

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

1 <= s.length <= 15
s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
It is guaranteed that s is a valid roman numeral in the range [1, 3999].

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.



*/