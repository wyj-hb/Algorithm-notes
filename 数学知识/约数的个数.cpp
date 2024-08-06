// #include <bits/stdc++.h>
// using namespace std;
// /*
// *   6
//     1 4 6 8 10 12
//     0
//  */
// /*
// *   1
//     3
//     4
//     4
//     4
//     6
//  */
// int n;
// int dd;
// const int N = 10000;
// //构造素数表
// int d[N];
// int b[N];
// int c;
// void get_init() {
//     for(int i = 2;i<N;i++) {
//         if(b[i] == 0) {
//             //没访问过
//             d[c++] = i;
//         }
//         for(int j = 0;i * d[j] <N;j++) {
//             b[i * d[j]] = 1;
//             if(i % d[j] == 0) break;
//         }
//     }
// }
// void solve() {
//     int sum = 1;
//     int tmp;
//     for(int i = 0;d[i] * d[i] <= dd;i++)
//     {
//         tmp = 0;
//         if(dd % d[i] == 0) {
//             tmp +=1;
//             dd /= d[i];
//             while(dd %d[i] == 0) {
//                 tmp +=1;
//                 dd /= d[i];
//             }
//         }
//         sum *= (tmp + 1);
//     }
//     if(dd > 1) sum *=2;
//     printf("%d\n",sum);
// }
// int main()
// {
//     get_init();
//     while(true) {
//         scanf("%d",&n);
//         if(n == 0) {
//             break;
//         }
//         for(int i = 1;i<=n;i++) {
//             scanf("%d",&dd);
//             solve();
//         }
//     }
//     return 0;
// }