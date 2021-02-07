/*******************************************************
Name Problem:present checking
Problem Category:adhoc
Problem Tester: Julio Cesar Mamani Villena.
Email: mamanivillenajc@gmail.com
*******************************************************/
#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define MOD 1000000007
#define EPS 1e-9
#define all(x) x.begin(),x.end()
#define fast(); ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
void solve(){
	const int MAX=1000002;
    bitset<MAX> est;
    int N, li;
    scanf("%d", &N);
    string res = "YES";
    while(N--){
    	scanf("%d", &li);
    	if(est[li]){
    		res = "NO";
    	}
    	est[li]=1;
    }
    printf("%s\n", res.c_str());

}
int main(){
    fast();
    solve();
    return 0;
}