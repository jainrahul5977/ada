// A structure to represent an adjacency list node
struct AdjListNode
{
    int dest;
    struct AdjListNode* next;
};

// A structure to represent an adjacency list
struct AdjList
{
    struct AdjListNode *head;
};

// A structure to represent a graph. A graph is an array of adjacency lists. Size of array will be V (number of vertices in graph)
struct Graph
{
    int V;
    struct AdjList* array;
};

typedef struct Graph GRAPH;
  int compo=1;

int countComponents (GRAPH* g)
{
    int count=0;
    int arr[g->V]={0};
    int i;
    for(i=0;i<g->V;i++)
    {
        if()
    }

    
    return count;
}
//this code is not completed so unfinished code.
