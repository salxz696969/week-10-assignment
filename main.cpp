#include "ajancy.hpp"
#include <iostream>
#include<vector>

int main(){
    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(0,2); 
    g.addEdge(1,3); 
    g.addEdge(1,4); 
    g.addEdge(2,5); 
    g.print();
    g.DFS(0); 
    g.BFS(0);
    return 0;
}