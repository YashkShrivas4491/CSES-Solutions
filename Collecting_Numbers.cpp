#include<bits/stdc++.h>
using namespace std;


int main() 
    {
    int n; 
    cin >> n;
    int l = 1;
    int ind[n+1] = {0};
    for (int i = 1; i <= n; i++) {
        int x; 
        cin >> x;
        ind[x] = i;
    }
    int c = 1;
    for (int i = 1; i <= n; i++) {
        if (l > ind[i]) 
            c++;
        l = ind[i];
    }
    cout << c << endl;
    
    return 0;
}
