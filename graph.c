#include <stdio.h>
#define MAX 10

int graph[MAX][MAX];
int visited[MAX];
int n;

/* ---------- Create Graph ---------- */
void createGraph()
{
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&graph[i][j]);
        }
    }
}

/* ---------- Display Graph ---------- */
void displayGraph()
{
    printf("\nAdjacency Matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",graph[i][j]);
        }
        printf("\n");
    }
}

/* ---------- DFS ---------- */
void DFS(int start)
{
    visited[start]=1;
    printf("%d ",start);

    for(int i=0;i<n;i++)
    {
        if(graph[start][i]==1 && !visited[i])
        {
            DFS(i);
        }
    }
}

/* ---------- BFS ---------- */
void BFS(int start)
{
    int queue[MAX];
    int front=-1,rear=-1;

    visited[start]=1;
    queue[++rear]=start;

    while(front!=rear)
    {
        int current=queue[++front];
        printf("%d ",current);

        for(int i=0;i<n;i++)
        {
            if(graph[current][i]==1 && !visited[i])
            {
                visited[i]=1;
                queue[++rear]=i;
            }
        }
    }
}

/* ---------- Reset Visited ---------- */
void resetVisited()
{
    for(int i=0;i<n;i++)
        visited[i]=0;
}

/* ---------- Main ---------- */
int main()
{
    int ch,start;

    do
    {
        printf("\n===== GRAPH MENU =====\n");
        printf("1. Create Graph\n");
        printf("2. Display Graph\n");
        printf("3. DFS Traversal\n");
        printf("4. BFS Traversal\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                createGraph();
                break;

            case 2:
                displayGraph();
                break;

            case 3:
                resetVisited();
                printf("Enter starting vertex: ");
                scanf("%d",&start);
                printf("DFS: ");
                DFS(start);
                break;

            case 4:
                resetVisited();
                printf("Enter starting vertex: ");
                scanf("%d",&start);
                printf("BFS: ");
                BFS(start);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    }
    while(ch!=5);

    return 0;
}
