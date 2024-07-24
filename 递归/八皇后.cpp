// #include <bits/stdc++.h>
// using namespace std;
// /*
// *  3
//     6
//     4
//     25
//  */
// /*
//  *
// *   25713864
//     17582463
//     36824175
//  */
// int n;
// const int N = 100;
// //8个位置可以怎么存放
// int s[N];
// int idx;
// int use[10];//第i列是否放了元素
// int d[N];//存储第i行皇后位于的列数
// int ha()
// {
//     int dd = 0;
//     for(int i = 1;i<=8;i++) {
//         dd = dd * 10 + d[i];
//     }
//     return dd;
// }
// void solve(int index) {
//     //index是行
//     if(index == 9) {
//         int dd = ha();
//         s[++idx] = dd;
//     }
//     for(int i = 1;i<=8;i++)
//     {
//         //遍历列,看该列是否被访问
//         if(use[i] == 0) {
//             int flag = 0;
//             //判断加入这个能否能用
//             for(int j = 1;j<index;j++)
//             {
//                 //遍历所有的行
//                 if(abs(d[j] - i) == abs(index - j)) {
//                     flag = 1;
//                     break;
//                 }
//             }
//             if(flag == 0) {
//                 //可以存放
//                 d[index] = i;
//                 use[i] = 1;
//                 solve(index+1);
//                 use[i] = 0;
//             }
//         }
//     }
// }
// int main()
// {
//     scanf("%d",&n);
//     solve(1);
//     int c;
//     while(n--) {
//         scanf("%d",&c);
//         printf("%d\n",s[c]);
//     }
//     return 0;
// }