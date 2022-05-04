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
const int maxn=1e5+10;
const int maxe=1e6+5;

int n,m;ll a[maxn],b[maxn];
int tot;
int to[maxn][30];//倍增
int desk[maxn];
void solve()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        to[i][0]=a[i];
    }
    for(int i=1;i<=n;i++){
        scanf("%lld",&b[i]);
    }
    for(int i=1;i<30;i++){
        for(int j=1;j<=n;j++){
            to[j][i]=to[to[j][i-1]][i-1];
        }
    }
    //这>...怎么感觉有种函数式编程的感觉,学到了新的去重方法
    int k=(*max_element(b+1,b+1+n)-n)/(n-unordered_set<int>(a+1,a+1+n).size());
    for(int i=1;i<=n;i++) desk[i]=i;
    for(int i=0;i<30;i++){
        if(k&(1<<i)){
            for(int j=1;j<=n;j++){
                desk[j]=to[desk[j]][i];
            }
        }
    }
    set<int> st;
    for(int i=1;i<=n;i++) st.insert(i);
    vector<int> ans(n+1,0);vector<bool> vis(n+1,false);
    for(int i=1;i<=n;i++){
        if(vis[desk[i]]) continue;
        ans[i]=b[desk[i]];
        vis[desk[i]]=true;
        st.erase(b[desk[i]]);
    }
    for(int i=1;i<=n;i++){
        if(ans[i]) continue;
        auto it=st.lower_bound(b[desk[i]]);
        ans[i]=*it;
        st.erase(it);
    }
    for(int i=1;i<=n;i++){
        printf("%d ",ans[i]);
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
