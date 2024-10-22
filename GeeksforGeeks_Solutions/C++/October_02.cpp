#include <iostream>
using namespace std;

class Solution
{
public:
    int rotateDelete(vector<int> &arr)
    {
        int n = arr.size();
        int k = 1;
        while (n > 1)
        {
            arr.insert(arr.begin(), arr.back()); // inserting last ele.to front
            arr.pop_back();                      // removing back ele.

            if (k > n)
                arr.erase(arr.begin()); // greater than n,delete 1st ele
            else
                arr.erase(arr.end() - k); // delete n-k+1th ele. from begin

            n = arr.size(); // update n
            k++;            // inc k
        }

        return arr[0];
    }
};