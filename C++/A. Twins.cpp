#include <bits/stdc++.h>
#define first f
#define second s
#define pb push_back
#define mp make_pair
#define eb emplace_back // is faster than push_back
#define all(cont) cont.begin(), cont.end()
#define INF (int)1e9
#define MEM(a, b) memset(a, (b), sizeof(a))
#define clr(x) x.clear()
#define gcd(x, y) __gcd(x, y) // atentie la cazul x = 0 y = 0
#define lsb(x) __builtin_ffs(x)
#define no_bits(x) __builtin_popcount(x)

using namespace std;

//shortcuts data types
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<char, char> pcc;
typedef pair<ll,ll> pll;
typedef pair<string, string> pss;
typedef vector<vi> vvi;
typedef vector<pii> vpii;
//DS
typedef set<int> seti;
typedef multiset<int> mseti;
typedef map<int, int> mpii;
//and <=> &&, or <=> ||)

bool comp(const int& l, const int& r){
	return l > r;
}

int main(){
	//fast i/o
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //sol
	vi coins;
	int n, x, s = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x;
		coins.pb(x);
		s += x;
	}
	sort(all(coins), comp);
	for (auto coin : coins)
		cout << coin << ' ' ;

	return 0;
}