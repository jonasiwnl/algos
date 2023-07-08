from typing import Optional

from structs import TreeNode

def bfs(root: Optional[TreeNode]):
    if not root:
        return
    queue = [root]
    while queue:
        node = queue.pop(0)
        if node.left:
            queue.append(node.left)
        if node.right:
            queue.append(node.right)
