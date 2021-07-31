typedef struct Node TreeNode ; 
struct Node {
  int val; 
  TreeNode* left ; 
  TreeNode* right ; 
}; 
/***************************************************
      1
     /. \
    2     3
  /. \.   /. \
 4.   5. 6.   7
 
 inorder: 4 2 5 1 6 3 7 
 preorder: 1 2 4 5 3 6 7
 postOrder: 4 5 2 6 7 3 1
 leverl order: 1 2 3 4 5 6 7
 
 ***************************************************/
 
//recursive inorder
void inorder(TreeNode* root){
  if(root){
    inorder(root->left) ; 
    cout<<root->val <<" " ; 
    inorder(root->right) ;
  }
}

//iterative inorder
void inorderIter(TreeNode* root) {
  if (root == NULL) return; 
  stack st ; 
  st.push(root) ; //1 
  while(!st.empty())
  TreeNode * tmp = st.top() ; 
  
  if(tmp->left) 
    st.push() ; //2 
  }else {
   cout<< tmp->val<<" " ; 
   st.pop() ; 
   st.push(tmp.right) ;
   }
  
  
}
