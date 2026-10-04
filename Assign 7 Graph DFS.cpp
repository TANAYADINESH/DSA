#include <iostream>
using namespace std;

//=====================================================
// GRAPH CLASS
//=====================================================
class Graph
{
private:
    int vertices;
    int adj[20][20];

public:
    Graph()              // Constructor
    {
        vertices = 0;
        for (int i = 0; i < 20; i++) // Initialize adjacency matrix
        {
            for (int j = 0; j < 20; j++)
            {
                adj[i][j] = 0;
            }
        }
    }
  // Create Graph
   void createGraph()
    {
        int edges;
        int source, destination;
        cout << "\nEnter number of vertices: ";
        cin >> vertices;
       for (int i = 0; i < vertices; i++)   // Initialize matrix for the given vertices
        {
            for (int j = 0; j < vertices; j++)
            {
                adj[i][j] = 0;
            }
        }
        cout << "Enter number of edges: ";
        cin >> edges;
        cout << "\nEnter edges (source destination):\n";
        for (int i = 0; i < edges; i++)
        {
            cout << "Edge " << i + 1 << ": ";
            cin >> source >> destination;
           if (source >= 0 && source < vertices &&destination >= 0 && destination < vertices)  // Check whether vertices are valid
            {
                adj[source][destination] = 1;  // Undirected graph
                adj[destination][source] = 1;
            }
            else
            {
                cout << "Invalid vertex number.\n";
                i--;
            }
        }
        cout << "\nGraph created successfully.\n";
    }
    void displayMatrix() // Display Adjacency Matrix
    {
        if (vertices == 0)
        {
            cout << "\nGraph is not created.\n";
            return;
        }
        cout << "\nAdjacency Matrix:\n\n";  // Display column headings
       cout << "   ";
        for (int i = 0; i < vertices; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        // Display matrix
        for (int i = 0; i < vertices; i++)
        {
            cout << i << ": ";
            for (int j = 0; j < vertices; j++)
            {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }
 // DFS using Adjacency Matrix
    void DFS(int startVertex)
    {
        if (vertices == 0)
        {
            cout << "\nGraph is not created.\n";
            return;
        }
        if (startVertex < 0 || startVertex >= vertices)
        {
            cout << "\nInvalid starting vertex.\n";
            return;
        }
       int visited[20];   // Visited array
        int stack[20];
        int top = -1;
        for (int i = 0; i < vertices; i++) // Step 1 : Initialize all vertices as unvisited
        {
            visited[i] = 0;
        }
        top++;   // Push starting vertex
        stack[top] = startVertex;
        cout << "\nDFS Traversal: ";
        while (top != -1) // Continue until stack becomes empty
        {
           int current = stack[top];       // Pop vertex from stack
            top--;
            if (visited[current] == 0)      // Process only if not visited
            {
                cout << current << " ";      // Mark vertex as visited
                visited[current] = 1;           // Check adjacent vertices from right to left
               for (int i = vertices - 1; i >= 0; i--)
                {
                    if (adj[current][i] == 1 &&
                        visited[i] == 0)
                    {
                        top++;
                        stack[top] = i;
                    }
                }
            }
        }
        cout << endl;
    }
};

// MAIN FUNCTION
// Menu is implemented inside main()
//=====================================================
int main()
{
    Graph graph;

    int choice;
    int startVertex;

    do
    {
        cout << "\n====================================";
        cout << "\n       GRAPH USING ADJACENCY MATRIX";
        cout << "\n====================================";
        cout << "\n1. Create Graph";
        cout << "\n2. Display Adjacency Matrix";
        cout << "\n3. Perform DFS";
        cout << "\n4. Exit";
        cout << "\n====================================";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            graph.createGraph();
            break;

        case 2:
            graph.displayMatrix();
            break;

        case 3:
            cout << "\nEnter starting vertex: ";
            cin >> startVertex;

            graph.DFS(startVertex);
            break;

        case 4:
            cout << "\nProgram terminated.\n";
            break;

        default:
            cout << "\nInvalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
