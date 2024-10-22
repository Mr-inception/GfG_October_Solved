#include <iostream>
using namespace std;

class solution
{
public:
    long long list(Node *node)
    {
        long long sum = 0;
        while (node != NULL)
        {
            sum = sum * 10 + node->data;
            node = node->next;
        }
        return sum;
    }
    long long multiplyTwoLists(Node *first, Node *second)
    {
        long long one = list(first);
        long long two = list(second);
        return (one * two) % 1000000007;
    }
};