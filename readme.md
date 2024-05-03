
compile : g++ Demo.cpp Graph.cpp Algorithms.cpp
run : ./a.exe
Graph Class Methods

Constructor: Graph()
Purpose: Initializes a new graph with zero vertices and zero edges.

loadGraph(const std::vector<std::vector<int>>& graph)
Purpose: Loads a graph from a square adjacency matrix where the presence of an edge between two vertices is indicated by a nonzero value.
Parameters: graph - A square matrix representing the adjacency of the vertices.
Exceptions: Throws std::invalid_argument if the input matrix is not square.

printGraph() const
Purpose: Outputs the number of vertices and edges in the graph to the standard output.

getNumVertices() const
Purpose: Returns the number of vertices in the graph.

getNumEdges() const
Purpose: Returns the number of edges in the graph.

getAdjacencyMatrix() const
Purpose: Returns the adjacency matrix of the graph. This method also checks if the graph is directed by comparing elements at i,j and j,i for asymmetry


Algorithms Namespace Methods
isBipartite(const ariel::Graph& g)
Purpose: Determines if the graph is bipartite, i.e., can be colored using two colors such that no two adjacent vertices share the same color.
Parameters: g - The graph to check.
Returns: A string that either indicates the partition sets of vertices if the graph is bipartite ("The graph is bipartite: A={...}, B={...}") or "0" if the graph is not bipartite.

dfs(int current, int parent, const std::vector<std::vector<int>>& adj, std::vector<bool>& visited, std::vector<int>& path)
Purpose: Helper function for depth-first search to detect cycles in the graph.
Parameters:
current - Current vertex in the DFS.
parent - Parent vertex of the current vertex.
adj - Adjacency matrix of the graph.
visited - Vector to track visited vertices.
path - Vector to store the path traversed.
Returns: true if a cycle is found, false otherwise.

negativeCycle(const ariel::Graph& g)
Purpose: Detects if there is any negative weight cycle in the graph that is reachable from any vertex using the Bellman-Ford algorithm.
Parameters: g - The graph to check.
Returns: A descriptive string of the cycle if found ("Negative cycle found: ..."), or "No negative cycle found."

isContainsCycle(const ariel::Graph& g)
Purpose: Checks if there is any cycle in the graph.
Parameters: g - The graph to check.
Returns: A string representation of the cycle if found, or "0" if no cycle is found.

isConnected(const ariel::Graph& g)
Purpose: Determines if the graph is connected, i.e., there is a path from any vertex to every other vertex in the graph.
Parameters: g - The graph to check.
Returns: true if the graph is connected, false otherwise.

shortestPath(const ariel::Graph& g, int start, int end)
Purpose: Computes the shortest path from a start vertex to an end vertex using the Bellman-Ford algorithm.
Parameters:
g - The graph.
start - Starting vertex.
end - Ending vertex.
Returns: A string representing the shortest path ("start -> ... -> end") or "Graph contains a negative weight cycle" if such a cycle impacts the path, or "-1" if no path exists.



DEMO.cpp
this file is used to test the graph and algorithm classes with diffrent graphs .
