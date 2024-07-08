/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int pow(int a, int b) {
        int ans=1;
        for(int z=0; z< b; z++) {
            ans *= a;
        }
        return ans;
    }

    int l=0;
    int r=0;

    int countNodes(TreeNode* root) {
        TreeNode *temp = new TreeNode;
        TreeNode *temp2 = new TreeNode;
        temp = root;
        temp2 = root;
        if(root == nullptr) {
            return 0;
        }
        
        while (temp != nullptr) {
            temp = temp->left;
            l++;
        }
        while (temp2 != nullptr) {
            temp2 = temp2->right;
            r++;
        }

        if (l==r) {
            return (1 <<l ) -1;
        }


        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
