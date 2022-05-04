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
const int maxn=2e6+10;
const int maxe=1e6+5;

int n,m,a[maxn];
int tot;
void solve()
{
    vector<int> ans;
    cin>>n;
    //scanf("%d",&n);
    string s;
    for(int i=1;i<=n;i++){
        cin>>s;
        int t=0;
        for(int j=0;j<s.size();j++){
            t*=26;
            t+=(s[j]-'a');
        }
        t-=(s[0]-'a');
        if(s[1]<s[0]) t++;
        ans.pb(t);
    }
    for(int i=0;i<ans.size();i++) printf("%d\n",ans[i]);
}
int main()
{
    IOS;
    int t=1;
    //scanf("%d",&t);
    while(t--){
        solve();
    }
    return 0;
}
