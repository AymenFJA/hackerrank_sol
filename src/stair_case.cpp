#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {

  int sp, w = 1, k;
  cin >> n;
  k = n - 1;
  for (int i = 0; i < n; i++) {
    sp = k;
    for (int j = 0; j < sp; j++)
      cout << " ";
    for (int m = 0; m < w; m++)
      cout << "#";
    cout << endl;
    k--;
    w++;
  }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
