#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// a structure to represent an edge in graph
struct Edge
{  

    int src, dest;
};
// a structure to represent a graph
struct Graph
{
    // V-> Number of vertices, E-> Number of edges
    int V, E;
    // graph is represented as an array of edges
    struct Edge* edge;
};
// Creates a graph with V vertices and E edges
struct Graph* createGraph(int V, int E)
{
    struct Graph* graph = 
           (struct Graph*) malloc( sizeof(struct Graph) );
    graph->V = V;
    graph->E = E;
graph->edge = (struct Edge*) malloc( graph->E *sizeof(struct Edge));
    return graph;
}
// A utility function to find the subset of an element i
int find(int parent[], int i)
{
    if (parent[i] == -1)
        return i;
    return find(parent, parent[i]);
}
// A utility function to do union of two subsets 
void Union(int parent[], int x, int y)
{
    parent[x] = y;
}
// The main function to check whether a given graph contains 
// cycle or not
int isCycle( struct Graph* graph )
{
    // Allocate memory for creating V subsets
    int *parent = (int*) malloc( graph->V * sizeof(int) );
    // Initialize all subsets as single element sets
    memset(parent, -1, sizeof(int) * graph->V);
    // Iterate through all edges of graph, find subset of both
    // vertices of every edge, if both subsets are same, then 
    // there is cycle in graph.
    for(int i = 0; i < graph->E; ++i)
    {
        int x = find(parent, graph->edge[i].src);
        int y = find(parent, graph->edge[i].dest);
        if (x == y)
            return 1;
        Union(parent, x, y);
    }
    return 0;
}
// Driver program to test above functions
int main()
{
    int V = 12, E = 12;
    struct Graph* graph = createGraph(V, E);
//add edge 0-0
    graph->edge[0].src = 0;
    graph->edge[0].dest = 0;
// add edge 0-1
  graph->edge[1].src = 0;
  graph->edge[1].dest = 1;
// add edge 0-2
  graph->edge[2].src = 0;
  graph->edge[2].dest = 2;
// add edge 1-5
  graph->edge[3].src = 1;
  graph->edge[3].dest= 5;
//add edge 1-4
 graph->edge[4].src = 1;
 graph->edge[4].dest =4;
 // add edge 1-3
 graph->edge[5].src = 1;
 graph->edge[5].dest=3;
 //add edge 3-6
 graph->edge[6].src =3;
 graph->edge[6].dest =6;
 //add edge 3-7
 graph->edge[7].src=3;
 graph->edge[7].dest=7;
 //add edge 6-8
 graph->edge[8].src=6;
 graph->edge[8].dest=8;
 //add edge 7-9
 graph->edge[9].src=7;
 graph->edge[9].dest=9;
// add edge 9-11
 graph->edge[10].src=9;
 graph->edge[10].dest=11;
//add edge 9-10
 graph->edge[11].src=9;
 graph->edge[11].dest=10;
    if (isCycle(graph))
        printf( "graph contains cycle" );
    else
        printf( "graph doesn't contain cycle" );
    return 0;
}
