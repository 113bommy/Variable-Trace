#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  for (int ind = 0; ind < t; ind++) {
    int n;
    cin >> n;
    int a, r = 0;
    for (int i = 0; i < n; i++) {
      cin >> a;
      r += a;
    }
    if (r % n == 0)
      cout << 0 << endl;
    else
      cout << 1 << endl;
  }
}
