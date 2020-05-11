#include <bits/stdc++.h>
using namespace std;

typedef long long ll;	

int n, a[100];

void solve(){
	bool checker = false;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int cnt = 1;
	for(int i = 0; i < n-1; i++){
		if(a[i] == a[n-1] && i != n-1){
			checker = true;
		}
		if(a[i] == a[i+1]){
			cnt++;
		}
	}
	if(cnt >= 3){
		checker = true;
	}
	if(checker == true){
		cout << "NO\n";
	} else{
		cout << "YES\n";
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t, i=1;
	cin >> t;
	while(t--){
		cout << "Case #" << i << ": ";
		i++;
		solve();
	}
}
