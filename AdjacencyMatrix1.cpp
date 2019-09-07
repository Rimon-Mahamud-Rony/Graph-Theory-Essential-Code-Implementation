#include<iostream>
using namespace std;
int adj[100][100]={0};

/// এখানে এই কোড টা কাজ করবে , নোড কাউন্টিং পদ্ধতিতে । মানে নোড যাই হোক না কেন কেন , কোড সেটাকে ওটোমেটিক ভাবে ০, ১, ২, ৩ এভাবে কাউন্ট করে ম্যাট্রিক্স তৈরী করে নিবে ।

int main()
{
    int node, edges;
    cout<<"enter the number of node and edges: ";cin>>node>>edges;
    int n1,n2;
    for(int i=0; i<edges; i++)
    {
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
    for(int i=0; i<node; i++)
    {
        for(int j=0; j<node; j++)
        {
            cout<<adj[i][j]<<"\t";
        }
        cout<<endl;
    }
    node=edges=0;
    return 0;
}

/*
    enter the number of node and edges: 5 8
0 1
0 2
0 3
0 4
1 2
2 3
3 4
4 2
0       1       1       1       1
1       0       1       0       0
1       1       0       1       1
1       0       1       0       1
1       0       1       1       0
*/

/*
enter the number of node and edges: 5 6
0 1
2 0
2 1
1 3
3 4
1 4
0       1       1       0       0
1       0       1       1       1
1       1       0       0       0
0       1       0       0       1
0       1       0       1       0
*/
