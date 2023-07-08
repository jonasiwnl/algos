from typing import Optional

from structs import TreeNode

# Max depth
def dfs(root: Optional[TreeNode]) -> int:
    if not root:
        return 0
    return max(dfs(root.left), dfs(root.right)) + 1
