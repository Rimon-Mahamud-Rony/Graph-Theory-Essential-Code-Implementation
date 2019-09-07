#include<iostream>
#include<vector>
using namespace std;

vector<int>adj[10];
///adj array te 10 ta ghor ache , sob ghore vector er onek man rakha zabe.
/// ba array gular sob ghore ekta kore vector create kora zabe.

bool visited[10]; ///random value ache array te;



void dfs(int s)
{
    visited[s]=true; ///value =1;

    for (int i=0; i <adj[s].size(); i++)
    {
        if(visited[adj[s][i]] == false)
            dfs(adj[s][i]);
    }
}
void initialize()
{
    for(int i=0; i<10; i++)
        visited[i]=false;
}
int main()
{
    int nodes=0, edges=0, n1=0, n2=0, connectedcomponents = 0;
    cout<<"enter the value of nodes :";cin>>nodes;
    cout<<"enter the value of edges :";cin>>edges;

    for (int i=0; i<edges; i++)
    {
        cin>>n1>>n2;
        adj[n1].push_back(n2);
        adj[n2].push_back(n1);

    }
    initialize();

    for(int i=0; i<nodes; i++)
    {
        if(visited[i] == false)
        {
            dfs(i);
            connectedcomponents++;
        }
    }
    cout<<"number of connected components: "<<connectedcomponents<<endl;
    return 0;
}
