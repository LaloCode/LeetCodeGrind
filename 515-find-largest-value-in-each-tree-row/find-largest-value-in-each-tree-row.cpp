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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> row;

        if (root == NULL)
        {
            return ans;
        }

        row.push(root);

        while(!row.empty())
        {
            int rowSize = row.size();
            int maxFound = row.front()->val;

            for(int i=0; i < rowSize; i++)
            {
                TreeNode* node = row.front();
                maxFound = max(maxFound, node->val);

                if (node->left != nullptr)
                    row.push(node->left);
                if (node->right != nullptr)
                    row.push(node->right);

                row.pop();
            }

            ans.push_back(maxFound);
        }

        return ans;
    }
};