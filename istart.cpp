#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define MOD 1000000007
//#define vector vector<int64_t>
#define loop(i,n) for(int i=0;i<n;i++)
#define print(v) for (auto i: v) cout << i << ' '
#define eb emplace_back
#define pf push_front
#define whole(x) begin(x),end(x)
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


int main(){
	std::ios::sync_with_stdio(false);
	int64_t n,k;
	cin >> n >> k;
	vector<vector<int64_t>> v;
	for(int64_t i=0;i<n;i++){
		int64_t p;
		cin >> p;
		vector<int64_t> v1;
		v.reserve(p);
		for(int64_t j=0;j<p;j++){
			int64_t flag;
			cin >> flag;
			v1.eb(flag);
		}
		v.eb(v1);
	}
	while(k--){
		int64_t x,y;
		cin >> x >> y;
		cout << v[x][y] << "\n";
	}
} 