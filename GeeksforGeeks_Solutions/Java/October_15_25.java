class Solution {
    
    public void getInorder(Node root, ArrayList<Integer> list){
        if(root==null) return;
        getInorder(root.left, list);
        list.add(root.data);
        getInorder(root.right, list);
    }

    int count = 0;
    int kth = -1;
    public void solve(Node root, int k){
        if(root==null) return;
        solve(root.left, k);
        count++;
        if(count==k){
            kth = root.data;
            return;
        }
        solve(root.right, k);
    }
    
    public int kthSmallest(Node root, int k) {
        
        // Approach - 1 : Using ArrayList
        // ArrayList<Integer> list = new ArrayList<>();
        // getInorder(root, list);
        // return list.get(k-1);

        // Approach - 2 : Slightly Optimized (no extra space for list)
        solve(root, k);
        return kth;
        
    }
}