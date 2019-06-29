#include <iostream>
using namespace std;

//BellmanFord function that takes in a 2-D Array, how many vertices are in the array, how many edges are in the array, and the source.
void BellmanFord(int graph[][3], int V, int E, int src)
{
    // Initialize distance of all vertices to some value.
    int distance[V];
    for (int i = 0; i < V; i++)
        distance[i] = 10000000;
    
    // initialize distance at source as 0
    distance[src] = 0;
    
    //Iterating through all edges and vertices. The outer loop goes until V -1 because it
    //doesn't include the source.
    
    for (int i = 0; i < V - 1; i++) {
        cout<<"This is iteration: "<< i+1 <<" "<<endl;
        cout<<"Costs: "<<endl;
        for (int j = 0; j < E; j++) {
            
            cout<<"Node: "<<graph[j][0]<<"\t"<<"Cost: "<<distance[graph[j][0]]<<endl;
            
            //Compare the distance with the edge cost, update the distance if it is less
            if (distance[graph[j][0]] + graph[j][2] < distance[graph[j][1]]){
                distance[graph[j][1]] = distance[graph[j][0]] + graph[j][2];
            }
            
             
        }
    }
    
    cout << "Final Vertex Distance from Source" << endl;
    for (int i = 0; i < V; i++)
   
     cout << i << "\t\t" << distance[i] << endl;

}
     


int main()
{
    int V = 6;
    int E = 8;
    
    // Every edge has three values (u, v, w) where the edge is from vertex u to v. And
    // weight of the edge is w.
    
    //0 is source (BF), 1 is Baran, 2 Lovelace,
    //3 is cerf, 4 is knuth, 5 is hopper
    int graph[][3] = { { 0, 1, 120 }, { 0, 2, 71 },
        { 2, 4, 84 }, { 2, 5, 128 },
        { 4, 5, 174 }, { 4, 3, 126 },
        { 1, 3, 130 }, { 3, 5, 128 } };
    
    BellmanFord(graph, V, E, 0);
    return 0;
}
