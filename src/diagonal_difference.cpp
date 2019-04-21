#include <bits/stdc++.h>
#include<numeric>
using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr) {
   // Initialize sums of diagonals
      int sum1 = 0;
      int sum2 = 0;
      int n =arr.size();
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      // finding sum of primary diagonal
      if (i == j)
       sum1 += arr[i][j];

      // finding sum of secondary diagonal
      if (i+j == 2)
        sum2 += arr[i][j];
    }
  }

  // Absolute difference of the sums
  // across the diagonals
  return abs(sum1 - sum2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
