// #include <bits/stdc++.h>
// using namespace std;
// /*
// *   10
//     50
//  */
// /*  29
//    229
//  */
// const int N = 1000100;
// int n;
// int idx = 0;
// int d[N];
// bool dd[N];
// void solve() {
//     //先构造素数表
//     for(int i = 2;i<=N;i++)
//     {
//          if(dd[i] == 0) {
//              d[idx++] = i;
//          }
//          for(int j = 0;d[j] * i <=N;j++) {
//             dd[d[j] * i] = 1;
//             if(i % d[j] == 0)
//             {
//                 break;
//             }
//         }
//     }
// }
// int main()
// {
//     solve();
//     while(scanf("%d",&n) != EOF) {
//         printf("%d\n",d[n-1]);
//     }
//     return 0;
// }