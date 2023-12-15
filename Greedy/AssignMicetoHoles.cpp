#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:

  int assignMiceHoles(int N, int M[], int H[]) {
    sort(M, M + N);
    sort(H, H + N);
    int max = INT_MIN;

    for (int i = 0; i < N; i++) {
      if (max < abs(M[i] - H[i])) {
        max = abs(M[i] - H[i]);
      }
    }
    return max;
  }
};

int main() {
  int t;
  cin >> t;

  while (t--) {
    int N;
    cin >> N;

    int M[N], H[N];

    for (int i = 0; i < N; i++) {
      cin >> M[i];
    }

    for (int i = 0; i < N; i++) {
      cin >> H[i];
    }

    Solution ob;
    cout << ob.assignMiceHoles(N, M, H) << endl;
  }
  return 0;
}
