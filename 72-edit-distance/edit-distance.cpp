class Solution {
public:
    int minDistance(string word1, string word2) {
       int m = word1.length();
    int n = word2.length();

    // DP table to store results of subproblems
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));

    // Base case when either string is empty
    for (int i = 0; i <= m; i++) {
      dp[i][0] = i; 
    }
    for (int j = 0; j <= n; j++) {
      dp[0][j] = j;
    }

    // Build the DP table
    for (int i = 1; i <= m; i++) {
      for (int j = 1; j <= n; j++) {
        if (word1[i-1] == word2[j-1]) {
          dp[i][j] = dp[i-1][j-1]; 
        } else {
          dp[i][j] = 1 + min({dp[i][j-1], dp[i-1][j], dp[i-1][j-1]});
        }
      }
    }
    return dp[m][n];  
    }
};