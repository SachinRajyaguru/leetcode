/**
## 1299. Replace Elements with Greatest Element on Right Side [ Easy ]



Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.

After doing so, return the array.

 

Example 1:

Input: arr = [17,18,5,4,6,1]
Output: [18,6,6,6,1,-1]
Explanation: 
- index 0 --> the greatest element to the right of index 0 is index 1 (18).
- index 1 --> the greatest element to the right of index 1 is index 4 (6).
- index 2 --> the greatest element to the right of index 2 is index 4 (6).
- index 3 --> the greatest element to the right of index 3 is index 4 (6).
- index 4 --> the greatest element to the right of index 4 is index 5 (1).
- index 5 --> there are no elements to the right of index 5, so we put -1.
Example 2:

Input: arr = [400]
Output: [-1]
Explanation: There are no elements to the right of index 0.
 

Constraints:

1 <= arr.length <= 104
1 <= arr[i] <= 105


*/


class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> a;
        for(int i = 0;i < n;++i)
        {
            int v = -1;
            for(int j = i + 1;j < n; ++j)
                v = max(v,arr[j]);
            a.push_back(v);
        }
        return a;
    }
};



/**
OUTPUT 
05/14/2021 01:56	Accepted	852 ms	15.2 MB	cpp
Success
Runtime: 852 ms, faster than 16.22% of C++ online submissions for Replace Elements with Greatest Element on Right Side.
Memory Usage: 15.2 MB, less than 9.87% of C++ online submissions for Replace Elements with Greatest Element on Right Side.
*/
