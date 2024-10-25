class Node
{
    int data;
    Node next;
    Node(int data) {
        this.data=data;
        this.next = null;
    }
}
class Solution {
    public static long calculate(Node curr)
    {
        long num = 0;
        while (curr != null)
        {
            num = (num*10)%1000000007 + curr.data;
            curr = curr.next;
        }
        return  num;
    }
    public long multiplyTwoLists(Node first, Node second) {
        long num1 = calculate(first);
        long num2 = calculate(second);
        return (num1*num2) % 1000000007;
    }
}
