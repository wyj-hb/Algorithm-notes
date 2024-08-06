// #include <bits/stdc++.h>
// using namespace std;
// /*
//    120
//    200
//  */
//
// /*
//    5
//    5
//  */
// const int N = 10000;
// int n;
// int cnt = 0;
// //找到质数
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
// void find_prime() {
//     //求质因数的个数
//     for(int i = 0;d[i] * d[i]<=n;i++) {
//         if(n % d[i] == 0) {
//             cnt++;
//             n = n/d[i];
//             while(n % d[i] == 0) {
//                 cnt++;
//                 n = n/d[i];
//             }
//         }
//     }
//     if(n > 1) cnt++;
//     printf("%d\n",cnt);
// }
// int main()
// {
//     get_init();
//     while(scanf("%d",&n) != EOF) {
//         cnt = 0;
//         find_prime();
//     }
//     return 0;
// }