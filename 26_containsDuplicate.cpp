

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int max_numbers_of_candy = *std::max_element(candies.begin(), candies.begin() + candies.size());

        for (int i = 0; i < candies.size(); i++)
        {
            candies[i] = (candies[i] + extraCandies >= max_numbers_of_candy);
        }
        return (vector<int>)candies;
    }
};

int main()
{
    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;

    Solution s;
    vector<bool> kidsWithCandies = s.kidsWithCandies(candies, extraCandies);
    for (auto i : kidsWithCandies)
    {
        cout << i;
    }

    return 0;
}