#include <bits/stdc++.h>
using namespace std;
clock_t tStart = clock();
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;
typedef vector<vector<pll>> vvpll;
typedef vector<pll> vpll;
typedef vector<pii> vpii;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define vin(arr, n) for(ll i = 0; i < n; i++) cin >> arr[i];
#define vout(arr, n) for(ll i = 0; i < n; i++) cout << arr[i] << " ";
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void solve(){
    long long n;
    cin >> n;
    while (n != 1){
        cout << n << " ";
        if(n & 1){
            n = (n*3) + 1;
        } else{
            n /= 2;
        }
    }   
    cout << 1; 
}
int main(){
    fast_cin();
    // ll t;
    // cin >> t;
    // for(int it=1;it<=t;it++) {
    //     solve();
    // }
    solve();
   //printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}