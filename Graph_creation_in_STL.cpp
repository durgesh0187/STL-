#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;   // n mean number of node
	cin>>n;
	int e;   // e mean number of edge
	cin>>e;
	
	vector<int> adj[n+1];
	
	for(int i=0;i<e;i++)
	{
		int a,b;   // a and b mean one node to second node connect
		cin>>a>>b;
		adj[a].push_back(b);  
		adj[b].push_back(a);
	}
	
	for(int i=1;i<=n;i++)
	{
		cout<<i<<"->";
		for(auto j:adj[i])
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}




                           // my graph like                 1
                                   //                     /    \
                                    //                  2       3
                                    //                  |  \    |
                                    //                  |    \  |
                                    //                  4 -------5
                                    //                   \      /
                                    //                     \   /
                                    //                       6
// my input
// 6
// 8
// 1 2
// 1 3
// 2 5
// 2 4
// 3 5
// 4 5
// 4 6
// 5 6


