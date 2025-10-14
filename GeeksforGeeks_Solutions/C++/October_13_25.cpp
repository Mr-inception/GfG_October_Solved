class solution{
    public:
    unordered_map<Node*,int> mymap;
   
   int getMaxSum(Node *root) 
   {
       // Add your code here
       if(!root) return 0;
       
       if(mymap.find(root)!=mymap.end()) return mymap[root];
       
       int inc = root->data;
       if(root->left){
           inc += getMaxSum(root->left->left);
           inc += getMaxSum(root->left->right);
       }
       if(root->right){
           inc+=getMaxSum(root->right->left);
           inc+=getMaxSum(root->right->right);
       }
       
       int exc = getMaxSum(root->right)+getMaxSum(root->left);
       
       
       mymap[root] = max(inc,exc);
       
       return mymap[root];
   }
};
