#include <bits/stdc++.h>
using namespace std;

bool can(string &s, int n, int k, int l) {
    int ops = 0;
    
    for (int i = 0; i < n; ) {
        if (s[i] == '1') {
            ops++;
            i += l; // skip this segment
        } else {
            i++;
        }
        
        if (ops > k) return false;
    }
    
    return true;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    string s;
    cin >> s;
    
    int left = 1, right = n;
    int ans = n;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        
        if (can(s, n, k, mid)) {
            ans = mid;
            right = mid - 1; // try smaller
        } else {
            left = mid + 1;
        }
    }
    
    cout << ans << endl;
    return 0;
}
