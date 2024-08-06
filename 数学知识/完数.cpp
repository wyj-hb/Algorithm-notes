// #include <bits/stdc++.h>
// using namespace std;
// /*
//     6
//  */
// /*
//  * 6
//  */
// //所有因子相加等于自身
// int n;
// const int N = 10000;
// int prime[N+1];
// int isuse[N+1];
// int c = 0;
// void solve() {
//     for(int j = 6;j<=n;j++) {
//         int ori = j;
//         int sum = 0;
//         for(int i = 2;i < j;i++)
//         {
//             if(ori % i == 0) {
//                 sum+=i;
//             }
//         }
//         // printf("%d-----%d----\n",j,sum);
//         if(sum + 1== j) {
//             if(j == 6) {
//                 printf("%d",j);
//             }
//             else {
//                 printf(" %d",j);
//             }
//         }
//     }
//     printf("\n");
// }
// int main()
// {
//     while(scanf("%d",&n) != EOF) {
//         //判断
//         solve();
//     }
//     return 0;
// }