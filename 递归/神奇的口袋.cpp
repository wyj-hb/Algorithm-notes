// #include <bits/stdc++.h>
// using namespace std;
// /*
//     2
//     12
//     28
//     3
//     21
//     10
//     5
//  */
//
// /*
// *   1
//     0
//  */
// int n;
// const int N = 30;
// int d[N];
// int cnt;
// int table[N];
// void solve(int sum,int start) {
//     if(sum == 40) {
//         cnt++;
//         return;
//     }
//     if(sum > 40) {
//         return;
//     }
//     for(int i = start;i<n;i++) {
//         if(table[i] == 0) {
//             //没有访问过
//             table[i] = 1;
//             solve(sum + d[i],i + 1);
//             table[i] = 0;
//         }
//     }
// }
// int main()
// {
//     while(scanf("%d",&n)!=EOF) {
//         for(int i = 0;i<n;i++) {
//             scanf("%d",&d[i]);
//         }
//         solve(0,0);
//         printf("%d\n",cnt);
//         cnt = 0 ;
//     }
//     return 0;
// }