#include "Graph.hpp"
#include <iostream>
#include <stdexcept>

namespace ariel {
    Graph::Graph() : numVertices(0), numEdges(0) {}

    void Graph::loadGraph(const std::vector<std::vector<int>>& graph) {
        int rows = graph.size();
        int cols = rows > 0 ? graph[0].size() : 0;

        if (rows != cols) {
            throw std::invalid_argument("Invalid graph: The graph is not a square matrix.");
        }

        adjacencyMatrix = graph;
        numVertices = rows;
        numEdges = 0;

        for (int i = 0; i < numVertices; ++i) {
            for (int j =0; j < numVertices; ++j) {
                if (adjacencyMatrix[i][j] != 0) {
                    ++numEdges;
                }
            }
        }
    }

    void Graph::printGraph() const {
        std::cout << "Graph with " << numVertices << " vertices and " << numEdges << " edges." << std::endl;
    }

    int Graph::getNumVertices() const {
        return numVertices;
    }

    int Graph::getNumEdges() const {
        return numEdges;
    }

    const std::vector<std::vector<int>>& Graph::getAdjacencyMatrix() const {
        bool isDirected = false;
        for (int i = 0; i < numVertices; ++i) {
            for (int j = 0; j < numVertices; ++j) {
                if (adjacencyMatrix[i][j] != adjacencyMatrix[j][i]) {
                    isDirected = true;
                    break;
                }
            }
        }
        return adjacencyMatrix;
    }
}