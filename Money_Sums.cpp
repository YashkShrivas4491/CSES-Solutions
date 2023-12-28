#include <bits/stdc++.h>

using namespace std;
const int s = 1e5;

int N, x, cnt, largest;
bool dp[s+1];

int main(){
    scanf("%d", &N);

    dp[0] = true;
    for(int i = 0; i < N; i++){
        scanf("%d", &x);
        for(int j = s-x; j >= 0; j--)
            if(dp[j])
                dp[j+x] = true;
    }

    for(int i = 1; i <= s; i++){
        if(dp[i]){
            largest = i;
            cnt++;
        }
    }

    printf("%d\n", cnt++);
    for(int i = 1; i <= s; i++)
        if(dp[i])
            printf("%d%c", i, (" \n")[i==largest]);
}