// Given a String, find the longest palindromic subsequence.

// Example 1:

// Input:
// S = "bbabcbcab"
// Output: 7
// Explanation: Subsequence "babcbab" is the
// longest subsequence which is also a palindrome.
// Example 2:

// Input: 
// S = "abcd"
// Output: 1
// Explanation: "a", "b", "c" and "d" are
// palindromic and all have a length 1.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function longestPalinSubseq() which takes the string S as input and returns an integer denoting the length of the longest palindromic subsequence of S.

// Expected Time Complexity: O(|S|*|S|).
// Expected Auxiliary Space: O(|S|*|S|).

class Solution{
  public:
    int longestPalinSubseq(string A) {
        //code here
        int n=A.length();
        string s1=A;
        reverse(A.begin(),A.end());
        int dp[n+1][n+1];
        for(int i=0;i<=n;i++){
            dp[i][0]=0;
        }
        for(int j=0;j<=n;j++){
            dp[0][j]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(A[i-1]==s1[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][n];
    }
};