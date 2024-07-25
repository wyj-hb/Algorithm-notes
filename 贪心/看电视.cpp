// #include <bits/stdc++.h>
// using namespace std;
// /*
// *   12
//     1 3
//     3 4
//     0 7
//     3 8
//     15 19
//     15 20
//     10 15
//     8 18
//     6 12
//     5 10
//     4 14
//     2 9
//     0
//  */
// /*
//  * 5
//  */
// const int N = 105;
// int n;
// struct node {
//     int l,r;
//     const bool operator<(const node & d) const {
//         return r < d.r;
//     }
// }d[N];
// //最大不相交区间个数
// int main()
// {
//     while(true) {
//         scanf("%d",&n);
//         if(n == 0) {
//             break;
//         }
//         int l,r;
//         for(int i = 1;i<=n;i++) {
//             scanf("%d%d",&l,&r);
//             d[i] = {l,r};
//         }
//         int res = 0;
//         sort(d+1,d+n+1);
//         int rr = -0x3f3f3f3f;
//         for(int i = 1;i<=n;i++) {
//             if(d[i].l >= rr) {
//                 res++;
//                 rr = d[i].r;
//             }
//         }
//         printf("%d\n",res);
//     }
//     return 0;
// }