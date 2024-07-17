// #include <bits/stdc++.h>
// using namespace std;
// /*
//     24 65
//     42 66666
//     3 67
//  */
//
// /*
//     66
//     180
//     39
//  */
// const int N = 15;
// int data1[N],data2[N];
// int main()
// {
//     int a,b;
//     int cnt1 = 1,cnt2 = 1;
//     while(scanf("%d%d",&a,&b) != EOF)
//     {
//         while(a) {
//             //依次取出
//             data1[cnt1++]  = a % 10;
//             a = a / 10;
//         }
//         while(b) {
//             //依次取出
//             data2[cnt2++]  = b % 10;
//             b = b / 10;
//         }
//         int res = 0;
//         for(int i = 1;i<cnt1;i++) {
//             for(int j = 1;j<cnt2;j++) {
//                 res +=data1[i]*data2[j];
//             }
//         }
//         cnt1 = cnt2 = 1;
//         printf("%d\n",res);
//     }
//     return 0;
// }