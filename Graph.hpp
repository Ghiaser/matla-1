#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>

namespace ariel {
    class Graph {
    private:
        std::vector<std::vector<int>> adjacencyMatrix;
        int numVertices;
        int numEdges;

    public:
        Graph();
        void loadGraph(const std::vector<std::vector<int>>& graph);
        void printGraph() const;
        int getNumVertices() const;
        int getNumEdges() const;
        const std::vector<std::vector<int>>& getAdjacencyMatrix() const;
    };
}

#endif