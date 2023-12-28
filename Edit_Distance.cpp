#include <bits/stdc++.h>
using namespace std;

const int maxN = 5e3+5;
int N, M, dp[maxN][maxN];
char a[maxN], b[maxN];

int main(){
    scanf("%s %s", a, b);
    N = (int) strlen(a);
    M = (int) strlen(b);

    memset(dp, 0x3f, sizeof(dp)); // Initialize dp array with a large value

    // Dynamic programming loop
    for(int i = 0; i <= N; i++){
        for(int j = 0; j <= M; j++){
            if(i == 0)      dp[i][j] = j;           // If a is empty, insert all b's characters
            else if(j == 0) dp[i][j] = i;           // If b is empty, delete all a's characters
            else if(a[i-1] == b[j-1])               // If current characters match
                dp[i][j] = dp[i-1][j-1];             // No operation needed, inherit value from diagonal
            else
                dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
                // Otherwise, take the minimum of three operations: deletion, insertion, substitution
        }
    }

    printf("%d\n", dp[N][M]); // Output the minimum edit distance
}
