#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int adj[100][100]={0};


int main()
{
    int node, edge;
    cout<<"enter the number of nodes "<<"-";cin>>node;
    cout<<"enter the number of edges "<<"-";cin>>edge;


    int n1, n2;
    n1=n2=0;

    for (int i=0; i<edge; i++)
        {
            cin>>n1>>n2;
            adj[n1][n2] = 1;
            adj[n2][n1] = 1;
        }


    for (int i=0; i<node; i++)
    {
        cout<<"In node --> "<<i<<" with others: ";
        for (int j=0; j<node; j++)
        {
            cout<<adj[i][j]<<"\t"; ///i=0, j=1,2,3,4,5
        }

        cout<<endl;
    }
    int n=0;
    cout<<"find the neighbour of the node: ";cin>>n;
     for (int i=0; i<node; i++)
        {
            if (adj[n][i]==1)
                cout<<i<<", ";
        }


    return 0;
}

/*
input
5 6
0 1
2 0
2 1
1 3
3 4
1 4
*/

