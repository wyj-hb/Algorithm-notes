// #include <bits/stdc++.h>
// using namespace std;
// /*
// *   2
//     4 35 68
//     20 15 78 2000
//     2 79 25
//     59 63
//  */
// /*
// *   35 0.01
//     0 0.00
//  */
// int c;
// const int N = 110;
// int d[N];
// int main()
// {
//     while(scanf("%d",&c) != EOF) {
//         int n,v,w;
//         while(c--) {
//             scanf("%d%d%d",&n,&v,&w);
//             for(int i = 1;i<=n;i++) {
//                 scanf("%d",&d[i]);
//             }
//             //如何配置使得得到最大体积的浓度为W(小于W)的解药
//             sort(d+1,d+1+n);
//             int V = 0;double W = 0;
//             for(int i = 1;i<=n;i++) {
//                 if(((W * V) + v * d[i])/(V+v) <= w) {
//                     //此时浓度还可以提升
//                     W = ((W * V) + v * d[i])/(V+v);
//                     V +=v;
//                 }
//                 else {
//                     break;
//                 }
//             }
//             printf("%d %.2f",V,W / 100);
//         }
//     }
//
//     return 0;
// }