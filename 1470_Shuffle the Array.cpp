#include <iostream>
#include <vector>
#include <map>

using namespace std;
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> new_nums;
        for (int i = 0; i < n; i++)
        {
            new_nums.push_back(nums[i]);
            new_nums.push_back(nums[i + n]);
        }

        return new_nums;
    }

    void printMyvector(vector<int> &nums, int n)
    {
        cout << '\n';
        for (int i = 0; i < n * 2; i++)
        {
            cout << nums[i];
        }
        cout << '\n';
    }
};

int main()
{
    vector<int> v1 = {2, 5, 1, 3, 4, 7};
    int n1 = 3;

    vector<int> v2 = {1, 2, 3, 4, 4, 3, 2, 1};
    int n2 = 4;

    vector<int> v3 = {1, 1, 2, 2};
    int n3 = 2;

    Solution s;
    vector<int> mynums = s.shuffle(v2, n2);
    s.printMyvector(mynums, n2);

    return 0;
}

/*
i = 2, 5, 1,j = 3, 4, 7

n/2
0 , 3


*/