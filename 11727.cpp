#include <iostream>
using namespace std;

//d[i] = d[i-1] + d[i-2]*2
int main() {
    int n;
    cin >> n;
    int dp[1001];
    dp[1] = 1; dp[2] = 3; dp[3] = 5; dp[4] = 11;
    for(int i = 5; i <= n; i++) 
        dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
    
    cout << dp[n] << endl;
}