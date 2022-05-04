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
char s1[55],s2[55];
void solve()
{
    scanf("%s",s1);
    scanf("%s",s2);
    if(s2[0]=='a' && strlen(s2)==1){
        printf("1\n");return;
    }
    for(int i=0;i<strlen(s2);i++){
        if(s2[i]=='a'){
            printf("-1\n");return;
        }
    }
    ll ans=pow(2,strlen(s1));
    printf("%lld\n",ans);
}
int main()
{
    int t=1;
    scanf("%d",&t);
    while(t--){
        solve();
    }
    return 0;
}
