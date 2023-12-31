#include <iostream>
#include <vector>

using namespace std;

bool is_complete_graph(vector<vector<int>> graph) {
    int num_vertices = graph.size();
    
    for (int i = 0; i < num_vertices; i++) {
        for (int j = 0; j < num_vertices; j++) {
            if (i != j && graph[i][j] != 1) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    vector<vector<int>> G = {{0, 1, 1, 1},
                             {1, 0, 1, 1},
                             {1, 1, 0, 1},
                             {1, 1, 1, 0}};
    cout << "LENGTH " << G.size() << endl;
    bool result = is_complete_graph(G);
    if (result) {
        cout << "The graph is a complete graph" << endl;
    } else {
        cout << "The graph is not a complete graph" << endl;
    }
    return 0;
}