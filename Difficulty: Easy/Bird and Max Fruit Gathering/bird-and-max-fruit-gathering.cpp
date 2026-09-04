class Solution {
    public:
      int maxFruits(vector<int>& arr, int m) {
          // code here
          int ans = 0;
          int i = 0;
          int sum = 0;
          int n = arr.size();

          for (int j = 0; j < 2*n; j++) {

              sum += arr[j%n];

              if (j - i + 1 > m) {
                  sum -= arr[i%n];
                  i++;
              }

              ans = max(ans, sum);
          }

          return ans;
      }
  };