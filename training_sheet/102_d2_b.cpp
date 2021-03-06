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
    
	ll num = 0, ans = 1;
	string n; cin >>n;
	
	for(auto at: n) 
		num += at - '0'; 

	if(num == 0 || n.size() == 1){
		cout <<0 <<endl;
		return 0;
	}

	while(num >= 10){
		ll soma = 0;

		while(num != 0){
			soma += num%10;
			num /= 10;
		}
		num = soma;
		ans++;
	}

	cout <<ans <<endl;

    return 0;
}

