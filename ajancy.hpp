#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <set>

class Graph {
private:
    std::vector<std::vector<int>> adjM;

public:
    Graph(int n) {
        adjM = std::vector<std::vector<int>>(n, std::vector<int>(n, 0));
    }

    void print() {
        for (auto i : adjM) {
            for (auto j : i) {
                std::cout << j << " ";
            }
            std::cout << std::endl;
        }
    }

    void addEdge(int u, int v, int w = 1, bool isDirected = false) {
        int n = adjM.size();
        if (u >= n || v >= n) return;
        adjM[u][v] = w;
        if (!isDirected) {
            adjM[v][u] = w;
        }
    }

    void DFS(int start) {
        std::vector<bool> visited(adjM.size(), false);
        std::stack<int> s;
        s.push(start);

        std::cout << "DFS Traversal: ";
        while (!s.empty()) {
            int current = s.top();
            s.pop();

            if (!visited[current]) {
                std::cout << current << " ";
                visited[current] = true;

                for (int i = 0; i < adjM.size(); i++) {
                    if (adjM[current][i] != 0 && !visited[i]) {
                        s.push(i);
                    }
                }
            }
        }
        std::cout << std::endl;
    }

    void BFS(int start) {
        std::vector<bool> visited(adjM.size(), false);
        std::queue<int> q;
        q.push(start);
        visited[start] = true;

        std::cout << "BFS Traversal: ";
        while (!q.empty()) {
            int current = q.front();
            q.pop();
            std::cout << current << " ";

            // Enqueue all unvisited neighbors
            for (int i = 0; i < adjM.size(); ++i) {
                if (adjM[current][i] != 0 && !visited[i]) {
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
        std::cout << std::endl;
    }
};
