// #include <bits/stdc++.h>
// using namespace std;
// /*
// *   1
//     2
//     3
//     4
//     0
//  */
// /*  1.00
//     3.00
//     5.67
//     8.83
//  */
// typedef long long LL;
// LL n;
// //分数
// struct node {
//     double up,down;
// };
// //获得a和b的最大公约数
// LL gcb(LL a,LL b) {
//     return b ? gcb(b,a%b) : a;
// }
// //分数化简
// node Simplify(node n) {
//     if(n.down < 0) {
//         //把负数换到分子上
//         n.down = -n.down;
//         n.up = -n.up;
//     }
//     if(n.up == 0) {
//         n.down = 1;
//     }
//     //上下除以最大公约数
//     LL d = gcb(n.up,n.down);
//     n.up/=d;
//     n.down/=d;
//     return n;
// }
// //分数相加
// node pl(node n1,node n2) {
//     //n1和n2两个节点相加
//     n1.up = (n1.up * n2.down + n1.down * n2.up);
//     n1.down = (n1.down * n2.down);
//     return n1;
// }
// void solve() {
//     //对称矩阵算一半
//     double cnt = 2;
//     node sum = {0,1};//初始化为0
//     node tmp;
//     for(LL i = n-1;i>0;i--)
//     {
//         tmp = {1*(double)i,cnt++};
//         sum = pl(sum,tmp);
//         sum = Simplify(sum);
//     }
//     sum.up*=2;
//     //化简
//     sum = Simplify(sum);
//     printf("%.2f\n",sum.up / sum.down + n);
// }
// int main()
// {
//     while(true)
//     {
//         scanf("%d",&n);
//         if(n == 0) {
//             break;
//         }
//         //计算n*n矩阵的值
//         solve();
//     }
//     return 0;
// }