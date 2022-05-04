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

int n,m,a[maxn];
int tot;
void solve()
{
    scanf("%d",&n);
    stack<int> s1,s2;
    int tmp=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    s1.push(1e9);s2.push(1e9);
    for(int i=n;i>=1;i--){
        if(tmp==0){
            tmp=a[i];
        }else{
            int t=a[i];
            if(tmp>t)swap(tmp,t);
            if(s1.top()>=tmp && s2.top()>=t && s1.top()>=t && s2.top()>=tmp){
                s1.push(tmp);s2.push(t);
            }else{
                printf("NO\n");return;
            }
            tmp=0;
        }
    }
    if(tmp!=0){
        if(tmp<=s1.top() && tmp<=s2.top()){
            printf("YES\n");return;
        }else{
            printf("NO\n");return;
        }
    }
    printf("YES\n");
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
