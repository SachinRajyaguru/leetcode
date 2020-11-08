#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &lst1, vector<int> &lst2)
    {
        vector<int> merged_array = mergedArray(lst1, lst2);
        for (int i = 0; i < merged_array.size(); i++)
            cout << merged_array[i] << " ";
        return 0;
    }

    vector<int> mergedArray(vector<int> &lst1, vector<int> &lst2)
    {
        vector<int> Array;

        int i = 0, j = 0;
        for (; i < lst1.size() && j < lst2.size();)
            Array.push_back(lst1[i] <= lst2[j] ? lst1[i++] : lst2[j++]);
        for (; i < lst1.size();)
            Array.push_back(lst1[i++]);
        for (; j < lst2.size();)
            Array.push_back(lst2[j++]);

        return Array;
    }
};

int main()
{
    Solution s;
    vector<int> l1 = {1, 3, 5, 6, 7, 9};
    vector<int> l2 = {2, 3, 5, 7, 8};
    s.findMedianSortedArrays(l1, l2);
    return 0;
}