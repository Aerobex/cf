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
    int minn1=1e9,minn2=1e9;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]<minn1) minn2=minn1,minn1=a[i];
        else if(a[i]<minn2) minn2=a[i];
    }
    int bottom=minn1/2+minn2/2;
    if(minn1&1)bottom++;
    if(minn2&1)bottom++;
    if(n==2){
        if(a[1]>a[2])swap(a[1],a[2]);
        int ans=0;
        if(a[1]<=(a[2]+1)/2){
            ans=(a[2]+1)/2;
        }else{
            int x=(2*a[1]-a[2]+1)/3;
            ans=(a[2]-x+1)/2;
            ans+=x;
        }
        printf("%d\n",ans);return;
    }
    for(int i=1;i<=n-2;i++){
        int ans=0;
        int x=a[i],y=a[i+1],z=a[i+2];
        ans=min(x,z)+(max(x,z)-min(x,z)+1)/2;

        if(x>y)swap(x,y);
        int ans1=0;
        if(x<=(y+1)/2){
            ans1=(y+1)/2;
        }else{
            int tmp=(2*x-y+1)/3;
            ans1=(y-tmp+1)/2;
            ans1+=tmp;
        }

        x=a[i+1];y=a[i+2];
        if(x>y)swap(x,y);
        int ans2=0;
        if(x<=(y+1)/2){
            ans2=(y+1)/2;
        }else{
            int tmp=(2*x-y+1)/3;
            ans2=(y-tmp+1)/2;
            ans2+=tmp;
        }
        bottom=min(bottom,min(ans,min(ans1,ans2)));
    }
    printf("%d\n",bottom);
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
