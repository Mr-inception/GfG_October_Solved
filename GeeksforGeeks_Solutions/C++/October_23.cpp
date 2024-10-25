class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(struct Node* head, int n) {
        // Time COmplexity - O(n)
         Node* temp = head;
        int fullSum = 0;
        int size = 0;
        while(temp != nullptr){
            size++;
            fullSum += temp->data;
            temp = temp->next;
        }
        Node* actual = head;
        for(int i=0; i<(size-n); i++){
            fullSum -= actual->data;
            actual = actual->next;
        }
        return fullSum;
    }
};
