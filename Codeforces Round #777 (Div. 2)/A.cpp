
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
    const int maxn=1e6+10;
    const int maxe=1e6+5;
     
    int n,m,a[maxn],siz[maxn];
    vector<int> g[maxn];
    void solve()
    {
    	scanf("%d",&n);
    	m=n%3;
    	int t=n/3;
    	if(m==0){
    		for(int i=1;i<=t;i++){
    			printf("21");
    		}
    	}else if(m==1){
    		printf("1");
    		for(int i=1;i<=t;i++){
    			printf("21");
    		}
    	}else{
    		for(int i=1;i<=t;i++){
    			printf("21");
    		}
    		printf("2");
    	}
    	printf("\n");
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
  
