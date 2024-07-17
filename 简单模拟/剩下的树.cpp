// #include <bits/stdc++.h>
// using namespace std;
// /*
//     4 2
//     1 2
//     0 2
//     11 2
//     1 5
//     4 7
//     0 0
//  */
//
// /*
//     2
//     5
//  */
// const int N = 10000;
// int c[N];
// int main()
// {
//     int a,b;
//     int d1,d2;
//     while(scanf("%d%d",&a,&b) != EOF)
//     {
//         if(b == 0 || a == 0) {
//             continue;
//         }
//         for(int i = 0;i<b;i++) {
//             scanf("%d%d",&d1,&d2);
//             memset(c + d1,-1,sizeof(int) * (d2 - d1 + 1));
//         }
//         int cnt = 0;
//         for(int i = 0;i<=a;i++) {
//             if(c[i] == -1) {
//                 cnt++;
//             }
//         }
//         printf("%d\n",a + 1 - cnt);
//         memset(c,0,sizeof(int)*(a+1));
//     }
//     return 0;
// }