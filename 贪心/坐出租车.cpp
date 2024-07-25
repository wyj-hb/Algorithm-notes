// #include <bits/stdc++.h>
// using namespace std;
// /*
//     3
//     13
//     21
//     0
//  */
//  /*
//     10
//     20.4
//     36
//   */
// int n;
// typedef long long LL;
// int main()
// {
//     while(true) {
//         scanf("%d",&n);
//         if(n == 0) {
//             break;
//         }
//         if(n <=4) {
//             printf("10\n");
//         }
//         else if(n<=8) {
//             printf("%d\n",(n-4)*2 +10);
//         }
//         else if(n <= 12) {
//             printf("%.1f\n",(n-8)*2.4 + 18);
//         }
//         else
//         {
//             int cc = ((n - 13) / 8 + 1);
//             LL res = cc * 18;
//             LL dd = n-cc*8;
//             //13-20走两个车
//             //21-28走三个车
//             if(dd <=4) {
//                 res +=4;
//                 printf("%lld",res);
//             }
//             else if(dd<=8){
//                 res += (dd-4)*2 +10;
//                 printf("%lld",res);
//             }
//             else {
//                 printf("%.1f\n",res + (dd - 8)*2.4 + 18);
//             }
//         }
//         //
//     }
//
//     return 0;
// }