#include<bits/stdc++.h>
using namespace std;

int adj[100][100];
///globally array declare korle by default tar value gula 0 hoye zay

int main()
{
    int node, edge;
    cout<<"enter the number of nodes "<<"-";cin>>node;
    cout<<"enter the number of edges "<<"-";cin>>edge;

    ///amader edge=input nite hobe , karon amra input hisebe protiti edge er value e nicchi.

    int n1, n2;
    ///n1 and n2 hoche node dutar value
    for (int i=0; i<edge; i++)
        {
            cin>>n1>>n2;
            adj[n1][n2] = 1;
            adj[n2][n2] = 1;
        }


        ///ekhon amra ei matrix ta dekhbo , mtahole node*node dhore amader matrix dekhte hobe.
    for (int i=0; i<node; i++)
    {
        for (int j=0; j<node; j++)
        {
            cout<<adj[i][j]<<"\t"; ///i=0, j=1,2,3,4,5
        }
        cout<<endl;
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
