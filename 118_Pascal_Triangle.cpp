#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        if (!numRows)
        {
            return {};
        }
        if (numRows == 1)
        {
            return {{1}};
        }
        else if (numRows == 2)
        {
            return {{1}, {1, 1}};
        }

        vector<vector<int>> pascal_triangle;
        pascal_triangle.push_back({1});
        pascal_triangle.push_back({1, 1});
        for (int i = 3; i <= numRows; ++i)
        {
            vector<int> row;
            row.push_back(1);
            for (int j = 0; j < i - 2; j++)
            {
                int l = pascal_triangle[i - 2][j];
                int r = pascal_triangle[i - 2][j + 1];
                row.push_back(l + r);
            }
            row.push_back(1);
            pascal_triangle.push_back(row);
        }
        return pascal_triangle;
    }
};

int main()
{
    Solution s;
    int n;
    cin >> n;
    for (int k = 0; k < n; k++)
    {
        vector<vector<int>> pascal_triangle = s.generate(k);
        cout << "\n\n\nPascalTrikon for #" << k;
        for (int i = 0; i < pascal_triangle.size(); i++)
        {
            for (int j = 0; j < pascal_triangle[i].size(); j++)
                cout << pascal_triangle[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}