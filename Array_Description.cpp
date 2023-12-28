#include<bits/stdc++.h>
using namespace std;

long long count_arrays(int n, int m, vector<int> xs) {
  /* Counts the number of arrays that match the description. */

  // Initialize the count of arrays to 1.
  long long count = 1;

  // Iterate over the unknown values in the array.
  for (int i = 0; i < n; i++) {
    if (xs[i] == 0) {
      // There are two possible values for the unknown value: 1 and 2.
      count *= 2;
    }
  }

  // Return the count of arrays.
  return count % (1000000007ll);
}

int main() {
  // Read the input from the console.
  int n, m;
  cin >> n >> m;
  vector<int> xs(n);
  for (int i = 0; i < n; i++) {
    cin >> xs[i];
  }

  // Count the number of arrays that match the description.
  long long count = count_arrays(n, m, xs);

  // Print the result.
  cout << count << endl;

  return 0;
}
