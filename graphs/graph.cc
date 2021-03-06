#include<iostream>
#include"graph.h"

using namespace std;

int main(int argc, char *argv[]) {
    Graph g(6, true);

    g.addEdge(0, 1, 0);
    g.addEdge(0, 4, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(1, 4, 0);
    g.addEdge(4, 3, 0);
    g.addEdge(3, 2, 0);
    g.addEdge(2, 4, 0);

    g.print();

    g.bft(0);
    g.bft(1);
    g.bft(2);
    g.bft(3);
    g.bft(4);
    g.bft(5);

    g.connectedComponents();

    g.dft(0);
    g.dft(1);
    g.dft(2);
    g.dft(3);
    g.dft(4);
    g.dft(5);

    return(0);
}
