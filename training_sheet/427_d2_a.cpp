#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define fi first
#define se second

#define fr(i,n) 	for(int i=0;i<n;i++)
#define frr(i,n)	for(int i=1;i<=n;i++)

#define ms(x,i)	memset(x,i,sizeof(x))
#define dbg(x)	cout << #x << " = " << x << endl
#define all(x)	x.begin(),x.end()

#define nl cout << endl
#define sarve cout << "sarve" << endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 

typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const int MOD = 1e9+7;

int main(){
    fastio;
    
	const int N = 1e5 + 10;
    int n; cin >>n;
	int v[N];

	fr(i,n) cin >>v[i];

	int crimes = 0, hired = 0, untreated = 0;
	fr(i,n){
		if(v[i] > 0){
			hired += v[i];
			continue;
		}

		if(v[i] < 0 and hired > 0){
			hired -= 1;
			continue;
		}

		if(v[i] < 0 and hired < 1) untreated += 1;
	}
	
	cout <<untreated <<endl;

    return 0;
}

