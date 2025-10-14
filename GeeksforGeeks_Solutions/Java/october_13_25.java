class Solution
{
    static HashMap<Node,Integer> hashMap =new HashMap<>();
    static int getMaxSum(Node root)
    {
        if(root==null){
            return 0;
        }
        if(hashMap.containsKey(root)){
            return hashMap.get(root);
        }
        int counter = root.data;
        if(root.left!=null){
            counter += getMaxSum(root.left.left);
            counter += getMaxSum(root.left.right);
        }
        if(root.right!=null){
            counter += getMaxSum(root.right.left);
            counter += getMaxSum(root.right.right);
        }
        int out = getMaxSum(root.left)+getMaxSum(root.right);
        hashMap.put(root,Math.max(counter, out));
        return hashMap.get(root);
    }
}