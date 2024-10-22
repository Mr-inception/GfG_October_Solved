#include <iostream>
using namespace std;

class Solution
{
public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int> &arr)
    {
        unordered_map<int, int> countMap; // To store the count of each candidate
        vector<int> result;               // To store the final candidates
        int n = arr.size();

        // Count the frequency of each candidate
        for (int num : arr)
        {
            countMap[num]++;
        }

        // Calculate the threshold (n/3)
        int threshold = n / 3;

        // Collect candidates that meet the criteria
        for (const auto &entry : countMap)
        {
            if (entry.second > threshold)
            {
                result.push_back(entry.first);
            }
        }

        // Sort the result in increasing order
        sort(result.begin(), result.end());

        return result;
    }
};