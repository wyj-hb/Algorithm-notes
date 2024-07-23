// #include <bits/stdc++.h>
// using namespace std;
//
// /*
// *       2
//         7
//         3 2 3 8 8 2 3
//         1 2 3 2 1 3 1
//         6
//         1 2 3 8 8 2
//         4 2 3 2 1 3
// */
//
// /*
// *       1={2=0,3=2,8=1}
//         2={2=1,3=0,8=1}
//         3={2=1,3=1,8=0}
//  */
// const int N = 2000;
// //根据索引找到对应的值
// int idx[N];
// //根据hash存储对应的值
// int d[N];
// //第一个维度为分组,分组也需要hash
// int o[N][N];
// int n,m;
// int main()
// {
//     scanf("%d",&n);
//     set<int> s;
//     set<int> ss;
//     while(n--)
//     {
//         memset(d,0,sizeof d);
//         memset(o,0,sizeof o);
//         scanf("%d",&m);
//         for(int i = 1;i<=m;i++) {
//             //输出记录
//             scanf("%d",&d[i]);//不重复并且默认从小打到排序
//             s.insert(d[i]);
//         }
//         int da;
//         for(int i = 1;i<=m;i++) {
//             scanf("%d",&da);
//             o[da][d[i]]++;
//             ss.insert(da);
//         }
//         for(set<int>::iterator it = ss.begin();it!=ss.end();it++) {
//             //双层遍历
//             printf("%d={",*it);
//             for(set<int>::iterator itt = s.begin();itt!=s.end();) {
//                 printf("%d=%d",*itt,o[*it][*itt]);
//                 if(++itt != s.end()) {
//                     printf(",");
//                 }
//             }
//             printf("}\n");
//         }
//         s.clear();
//         ss.clear();
//     }
//     return 0;
// }