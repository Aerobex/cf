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
int mp[maxn][maxn];
int board[maxn][maxn];
int dir[4][2]={{0,0},{0,1},{-1,0},{-1,1}};
int tot=0;
vector<pr> l,r;
void check()
{
	for(int i=n;i>=1;i--){
		for(int j=m;j>=1;j--){
			if(mp[i][j]==0) continue;
			
			if(i>1 && mp[i][j]==1){
				l.pb({i-1,j});r.pb({i,j});
			}else if(j>1 && mp[i][j]==1){
				l.pb({i,j-1});r.pb({i,j});
			}
		}
	}
}
void solve()
{
	scanf("%d %d",&n,&m);
	l.clear();r.clear();
	char s[maxn];
	for(int i=1;i<=n;i++){
		scanf("%s",s+1);
		for(int j=1;j<=m;j++){
			mp[i][j]=s[j]-'0';
		}
	}
	//for(int i=1;i<=n;i++){
	//	for(int j=1;j<=m;j++){
	//		cout<<mp[i][j]<<' ';
	//	}
	//	cout<<endl;
	//}
	if(mp[1][1]==1) {
		printf("-1\n");return;
	}
	check();
	printf("%d\n",l.size());
	for(int i=0;i<l.size();i++){
		printf("%d %d %d %d\n",l[i].first,l[i].second,r[i].first,r[i].second);
	}
}
int main()
{
	//out;
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
