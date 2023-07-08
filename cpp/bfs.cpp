#include <vector>
#include <queue>

#include "structs.h"

using std::queue, std::vector;

// Sample BFS function, returns vector of vectors of ints by level
vector<vector<int>>* bfs(TreeNode* root) {
    // Initialize empty queue, then push root node
    queue<TreeNode*> q;
    q.push(root);

    vector<vector<int>> ret = vector<vector<int>>();

    while (!q.empty()) {
        vector<int> level = vector<int>();

        size_t len = q.size();
        for (size_t i = 0; i < len; ++i) {
            // Pop front node
            TreeNode* node = q.front();
            q.pop();
            level.push_back(node->val);

            // Push children
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        ret.push_back(level);
    }
}
