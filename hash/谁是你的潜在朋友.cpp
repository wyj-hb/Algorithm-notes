// #include <bits/stdc++.h>
// using namespace std;
// /*
// *      4 5
//         2
//         3
//         2
//         1
//  */
// /*
//    1
//    BeiJu
//    1
//    BeiJu
//  */
// const int N = 201;
// struct node{
//     int id;
//     int love;
// }stu[N];
// int d[N];
// int n,m;
// int main()
// {
//     while(scanf("%d %d",&n,&m) != EOF) {
//         memset(d,0,sizeof d);
//         for(int i = 1;i<=n;i++) {
//             stu[i].id = i;
//             scanf("%d",&stu[i].love);
//             d[stu[i].love]++;
//         }
//         for(int i = 1;i<=n;i++) {
//             if(d[stu[i].love]-1) {
//                 printf("%d\n",d[stu[i].love]-1);
//             }
//             else {
//                 printf("BeiJu\n");
//             }
//         }
//     }
//
//     return 0;
// }