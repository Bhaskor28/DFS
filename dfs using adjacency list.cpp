// Bhaskor Roy
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define sll signed long long
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()

#define            pb                push_back
#define            pbk                pop_back
#define          sz(a)               (int)a.size()
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int G[100][100];
int n;
vector<bool>vis(1000,0);

void dfs(int u,vector<vector<int>>&v){
	
		vis[u]=1;
		for(int i=0;i<v[u].size();i++){
			if(vis[v[u][i]]==0){
				cout<<v[u][i]<<" ";
				dfs(v[u][i],v);
			}

		}
	



}


void s1(){
	
	cin>>n;
	int m;
	cin>>m;
	vector<vector<int>>v(n+1);
	while(m--){

		int x,y;
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}
for(int i=1;i<=n;i++){

	for(int j=0;j<v[i].size();j++){
		cout<<v[i][j]<<" ";
	}
	cout<<endl;
}

dfs(1,v);



}

int main(){

	s1();




	return 0;
}

/*example

 	5
    6
    1 2
    1 3
    3 4
    4 5
    5 1
    2 5



*/