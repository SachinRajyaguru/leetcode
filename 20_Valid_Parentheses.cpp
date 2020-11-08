/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

    1.Open brackets must be closed by the same type of brackets.
    2.Open brackets must be closed in the correct order.

Constraints:

1 <= s.length <= 10^4
s consists of parentheses only '()[]{}'.


Example 1:
    Input: s = "()"
    Output: true

Example 2:
    Input: s = "()[]{}"
    Output: true

Example 3:
    Input: s = "(]"
    Output: false

Example 4:
    Input: s = "([)]"
    Output: false

Example 5:
    Input: s = "{[]}"
    Output: true


*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string str)
    {
        stack<char> st;
        unordered_map<char, char> chs;
        chs['{'] = '}';
        chs['['] = ']';
        chs['('] = ')';

        for (int i = 0; i < str.size(); i++)
        {
            char cur = str[i];
            // cout << (chs[st.top()] != cur);

            if ((st.empty()) && (cur == ')' || cur == ']' || cur == '}'))
                return false;

            else if (cur == '(' || cur == '[' || cur == '{')
            {
                st.push(cur);
                continue;
            }
            if (chs[st.top()] != cur)
                return false;
            if (chs[st.top()] == cur)
                st.pop();
        }
        return st.empty();
    }
};

int main()
{
    Solution s;
    string input;
    cin >> input;
    cout << s.isValid(input);
    return 0;
}

/*

AddressSanitizer:DEADLYSIGNAL
=================================================================
==30==ERROR: AddressSanitizer: SEGV on unknown address (pc 0x0000003af6ea bp 0x7ffd4aa205d0 sp 0x7ffd4aa205c0 T0)
==30==The signal is caused by a READ memory access.
==30==Hint: this fault was caused by a dereference of a high value address (see register values below).  Dissassemble the provided pc to learn which register was used.
    #6 0x7fed201a20b2  (/lib/x86_64-linux-gnu/libc.so.6+0x270b2)
AddressSanitizer can not provide additional info.
==30==ABORTING

*/