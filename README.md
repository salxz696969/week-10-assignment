# DFS and BFS
# Overview
This assignment will impletment 2 graph traversal: DFS and BFS to a adjacency graph.
The graph contains 6 vertices and 5 edges.

# Graph Structure
. Vertices: 6
. Edges:
    .(0,1)
    .(0,2)
    .(1,3)
    .(1,4)
    .(2,5)
# DFS traversal:
This traversal method is to explore a node as far and deep as possible before tracking back.
A stack is used to manage the nodes that need to be visited next

# Output:
With 0 node as starting point
DFS traversal: 0 2 5 1 4 3

# Process of DFS:

. it starts with the node i give to it, in this case is 0
. then it goes to node 2 and after that to node 5, which is the deepest one
. after that it backtrack and go to the other side of the node and it will do the same thing


# BFS Traversal:
This traversal is to explore all the neighbors node at the current depth before going in deeper. I use queue to manage the nodes 

# Output BFS:
With node 0 as starting point
BFS Traversal: 0 1 2 3 4 5

# Process of BFS

. First starting with node 0, then it visit the 1 and 2 that is on the same depth
. Then it visit the rest at the bottom