// #include <bits/stdc++.h>
// using namespace std;
// /*
//     5 1 2 4 14 9
//     3
//     1 3
//     2 5
//     4 1
//  */
//
// /*
//     3
//     10
//     7
//  */
// const int N = 100000;
// int n,m;
// int d[N];
// int q[N];
// void solve() {
//     int a1,a2;
//     scanf("%d%d",&a1,&a2);
//     //从a1到a2的路径
//     int data = min(abs(q[a2-1]-q[a1-1]),q[n] - abs(q[a2-1]-q[a1-1]));
//     printf("%d\n",data);
// }
// int main()
// {
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++)
//     {
//         //前缀和
//         scanf("%d",&d[i]);
//         q[i] = q[i-1] + d[i];
//     }
//     scanf("%d",&m);
//     while(m--) {
//         solve();
//     }
//     return 0;
// }