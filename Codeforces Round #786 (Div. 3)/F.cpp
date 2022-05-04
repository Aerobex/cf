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
const int maxn=1e3+10;
const int maxe=1e6+5;

int n,m,q,a[maxn],mp[maxn][maxn];
int tot;
char s[maxn];
void solve()
{
    scanf("%d %d %d",&n,&m,&q);
    tot=0;
    for(int i=1;i<=n;i++){
        scanf("%s",s);
        int len=strlen(s);
        for(int j=1;j<=m;j++){
            if(s[j-1]=='.') mp[i][j]=0;
            else mp[i][j]=1,a[j]++,tot++;
        }
    }
    int x,y;
    for(int __=1;__<=q;__++){
        scanf("%d %d",&x,&y);
        if(mp[x][y]){
            mp[x][y]=0;a[y]--;tot--;
        }else{
            mp[x][y]=1;a[y]++;tot++;
        }
        int k=tot/n;
        int off=tot-k*n;
        int ans=0;
        for(int i=1;i<=k;i++){
            ans+=n-a[i];
        }
        for(int i=1;i<=off;i++){
            if(mp[i][k+1]==0){
                ans++;
            }
        }
        printf("%d\n",ans);
    }
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
