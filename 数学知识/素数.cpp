#include <bits/stdc++.h>
using namespace std;
/*
 * 70
 */
/*11 31 41 61
 */
const int N = 10010;
int idx = 0;
int d[N];
bool dd[N];
int n;
void solve() {
    for(int i = 2;i<=n;i++)
    {
        if(dd[i] == 0) {
            d[idx++] = i;
        }
        for(int j = 0;d[j] * i <=n;j++) {
            dd[d[j] * i] = 1;
            if(i % d[j] == 0)
            {
                break;
            }
        }
    }
}
int main()
{
    while(scanf("%d",&n) != EOF) {
        solve();
        int flag = 1;
        for(int i = 0;i<idx;i++) {
            if(d[i] % 10 == 1 &&d[i] != n) {
                if(flag == 1) {
                    printf("%d",d[i]);
                } else {
                    printf(" %d",d[i]);
                }
                flag = 0;
            }
        }
        if(flag) {
            printf("-1");
        }
        printf("\n");
        idx = 0;
    }
    return 0;
}