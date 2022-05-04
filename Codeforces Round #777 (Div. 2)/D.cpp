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
int prim[maxn];
void getprim()
{
    tot=0;
    for(int i=2;i<maxn;i++){
        if(!prim[i]) prim[++tot]=i;
        for(int j=1;j<=tot && prim[j]*i<maxn;j++){
            prim[prim[j]*i]=1;
            if(i%prim[j]==0) break;
        }
    }
}
bool isprime(int x)
{
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}
void solve()
{
    scanf("%d %d",&n,&m);
    tot=0;
    while(n%m==0){
        tot++;n/=m;
    }
    if(tot==0 || tot==1){
        printf("NO\n");return;
    }
    if(isprime(n)){
        if(isprime(m)){
            printf("NO\n");return;
        }else{
            if(tot==2){
                printf("NO\n");return;
            }else if(tot==3){
                for(int i=2;i*i<=m;i++){
                    if(m%i==0){
                        int k=m/i;
                        if(k*n%m!=0 || n*i%m!=0){
                            printf("YES\n");return;
                        }
                    }
                }
                printf("NO\n");return;
            }else{
                printf("YES\n");return;
            }
        }
    }else{
        printf("YES\n");return;
    }
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
