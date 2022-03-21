#include<bits/stdc++.h>
using namespace std;
const int inf =0x3f3f3f3f;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define in freopen("in.txt","r",stdin)
#define out freopen("out.txt","w",stdout)
#define ms(x,a) memset(x,a,sizeof(x))
#define ll long long
#define pb push_back
#define pr pair<int,int>
#define debug printf("%d %s\n",__LINE__,__FUNCTION__)
#define rep(i, a, n) for(int i=a; i<=n; i++)
#define rg register int//卡常
#define oj
const int mod=1e9+7;
const int maxn=100+10;
const int maxe=1e6+5;

int n,m,a[maxn];
char mp[maxn][maxn];
bool vis[maxn][maxn];
int dir[4][2]={{0,0},{0,1},{-1,0},{-1,1}};
bool legal(int x,int y){
	return x>=0 &&y>=0 && x<n && y<n;
}
bool check()
{
	for(int i=1;i<n;i++){
		for(int j=0;j<m-1;j++){
			int black=0,white=0;
			for(int k=0;k<4;k++){
				int u=i+dir[k][0],v=j+dir[k][1];
				if(mp[u][v]=='0'){
					white++;
				}else{
					black++;
				}
			}
			if(black==3) return false;
		}
	}
	return true;
}
void solve()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%s",mp[i]);
	}
	if(check()){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--){
		solve();
	}
	return 0;
}
/*
	#ifndef oj	
	in;out;
	#endif
*/
