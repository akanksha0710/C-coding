#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> indexed_set;

#define ll long long int
#define fo(i,n) for(i=0;i<n;i++)
#define f0(i,k,n) for(i=k;i<n;i++)
#define fr(i,k,n) for(i=k-1;i>=n;i--)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define ss(s) scanf("%s",s)
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define ps(s) printf("%s\n",s)
#define setbits(x) __builtin_popcountll(x)
#define endl '\n'
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x,y) cout << #x << "=" << x << "," << #y << "=" << y <<endl
#define pb push_back
#define mk make_tuple
#define F first
#define S second
#define lb lower_bound
#define ub upper_bound 
#define MI INT_MIN
#define MX INT_MAX
#define gcd(x,y) __gcd(x,y)
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it,a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.145926535897932384626
#define inf 1e18
#define sp(x,y) fixed<<setprecision(x)<<y   
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
typedef priority_queue<int, vector<int>,greater<int> > pqri;
typedef priority_queue<ll, vector<ll>,greater<ll> > pqrl;
typedef priority_queue<int> pqi;
typedef priority_queue<int> pql;
typedef pair <int,int> pii;
typedef pair <ll,ll> pll;
typedef vector <int> vi;
typedef vector <ll> vl;
typedef vector <pii> vpii;
typedef vector <pll> vpll;
typedef vector <vi> vvi;
typedef vector <vl> vvl;
typedef stack <int> sti;
typedef stack <ll> stl;
typedef queue <int> qi;
typedef queue <ll> ql;
typedef map<int,int> mpi;
typedef map<ll,ll> mpl;

const int mod = 1'000'000'007;
const int N = 3e5, M=N;

int p=1;

ll pw(ll n,ll a)
{
    ll ans = 1;
    while(a)
    {
        if(a&1)
        ans = (n*ans)%mod;
        n = (n*n)%mod;
        a>>=1;
    }
    return ans;
}
ll modInv(ll n, ll p) 
{ 
    return pw(n, p - 2); 
} 

bool prime[10000001];
int call[10000001];
void Sieve(int n)
{
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 

    for(ll i=2;i<=n;i++)
    if(prime[i])call[i]=call[i-1]+1;
    else call[i]=call[i-1];
}


void google(){
    ll i,j,k,m,n,x,y,z,mi,mx,count=0,ans=0;
    string s;
    cin>>s;
    string ss = s;
    // map<char,int> mp;
    cout<<"Case #"<<p<<": ";
    ll a[26]={};
    for(auto i:s){
        int ind = (int)i-'a';
        a[ind]++;
        if(a[ind]*2>s.length()){
            cout<<"IMPOSSIBLE\n";
            p++;
            return;
        }
    }
    map<char,int> mp;
    for(auto i:s){
        mp[i]=a[i-'a'];
        // cout<<i<<" "<<mp[i]<<endl;
    }
    j=0;
    k=0;
    map<char,stack<char> > mpp;
    for(auto &i:s)
    {
       for(j=0;;j++)
       {
           j=j%((int)s.length());
           deb(mp[i]);
           if(mp[i]==0)break;
           if(mpp[s[j]].size()==a[(int)s[j]-'a'])continue;
           if(i==s[j])continue;
           mpp[s[j]].push(i);
           mp[i]--;
           k++;
        //    if(rand()>300)break;
        if(k>=1000)break;

       }
    }
    for(auto i:s){
        if(mpp[i].size()==0)continue;
        cout<<mpp[i].top();
        mpp[i].pop();
    }
    cout<<endl;
    p++;
    
}
void solve(){
    ll i,j,k,m,n,x,y,z,mi,mx,count=0,ans=0,sum=0;
    
}

int main() {
    fast();
    // Sieve(10000000);
    int t = 1;
    cin>>t;
    while(t--) {
        // solve();
       google();
    }
}

