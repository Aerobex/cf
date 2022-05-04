#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pr;
const int inf =0x3f3f3f3f;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define in freopen("in.txt","r",stdin)
#define out freopen("out.txt","w",stdout)
#define ms(x,a) memset(x,a,sizeof(x))
#define ll long long
#define pb push_back
#define pr pair<int,int>
#define debug printf("%d %s\n",__LINE__,__FUNCTION__)
#define rep(i, a, n) for(int i=a; i<n; i++)
#define rg register int//卡常
#define ONLINE_JUDGE
const int mod=1e9+7;
const int maxn=2e5+10;
const int maxe=1e6+5;

int n,m;
vector<int> g[maxn];
int ind[maxn],outd[maxn];
int dp[maxn];
void dfs(int now)
{
    if(dp[now]!=-1) return;
    if(outd[now]>=2){
        for(int i=0;i<g[now].size();i++){
            int v=g[now][i];
            if(ind[v]>=2){
                if(dp[v]==-1){
                    dfs(v);
                }
                dp[now]=max(dp[v]+1,dp[now]);
            }
        }
    }
    dp[now]=max(dp[now],1);
    
}
void solve()
{
    scanf("%d %d",&n,&m);
    int x,y;
    for(int i=1;i<=n;i++){
        ind[i]=outd[i]=0;dp[i]=-1;
    }
    for(int i=1;i<=m;i++){
        scanf("%d %d",&x,&y);
        g[x].pb(y);
        ind[y]++;outd[x]++;
    }
    for(int i=1;i<=n;i++) dfs(i);
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=max(ans,dp[i]);
    }
    printf("%d",ans);
}
int main()
{
    int t=1;
    //scanf("%d",&t);
    while(t--){
        solve();
    }
    return 0;
}
