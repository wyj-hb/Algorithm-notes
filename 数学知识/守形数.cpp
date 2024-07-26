// #include <bits/stdc++.h>
// using namespace std;
// /*
// *   6
//     11
//  */
//
// /*
//  *  Yes!
//     No!
//  */
// int d1[10],d2[10];
// int n;
// int cnt;
// void convert(int d[],int x) {
//
//     while(x) {
//         d[cnt++] = x % 10;
//         x = x/10;
//     }
// }
//
// int main()
// {
//     while(scanf("%d",&n) != EOF) {
//         int dd = pow(n,2);
//         //将数的每一位存储到数组中
//         cnt = 0;
//         convert(d2,dd);
//         cnt = 0;
//         convert(d1,n);
//         //cnt是个数
//         int flag = 1;
//         for(int i = cnt-1;i>=0;i--) {
//             if(d1[i] != d2[i]) {
//                 printf("No!\n");
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag) {
//             printf("Yes!\n");
//         }
//     }
//     return 0;
// }