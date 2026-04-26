#include<bits/stdc++.h>
using namespace std;

int main(){
    long long l, r;
    cin >> l >> r;
    
    // Count of odd numbers in [l, r]
    long long oddCount = (r + 1) / 2 - l / 2;
    
    cout << (oddCount % 2 == 1 ? "odd" : "even") << endl;
    
    return 0;
}
