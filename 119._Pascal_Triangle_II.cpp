#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        if (rowIndex == 0)
            return {1};
        else if (rowIndex == 1)
            return {1, 1};
        else if (rowIndex > 1)
        {
            vector<int> row = getRow(1);
            for (int i = 3; i <= rowIndex + 1; i++)
            {
                vector<int> temp;
                temp.push_back(1);
                for (int j = 0; j < i - 2; j++)
                {
                    temp.push_back(row[j] + row[j + 1]);
                }
                temp.push_back(1);
                row = temp;
            }
            return row;
        }
        return {};
    }
};

int main()
{
    Solution s;
    int n;
    cin >> n;
    vector<int> row = s.getRow(n);
    for (int i = 0; i < row.size(); i++)
    {
        cout << row[i] << ", ";
    }
    return 0;
}