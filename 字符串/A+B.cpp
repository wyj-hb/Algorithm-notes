// #include <bits/stdc++.h>
// using namespace std;
// /*
// *   2 4 5
//     8 123 456
//     0
//  *
// */
//
// /*
// *   1001
//     1103
//  */
// typedef long long LL;
// const int N = 35;
// int d[N];
// int main()
// {
//     LL m,a,b;
//     while(scanf("%lld",&m) != EOF)
//     {
//         if(m == 0) {
//             break;
//         }
//         scanf("%lld%lld",&a,&b);
//         //求a + b 的m进制数
//         LL c = a + b;
//         //求 c 的 m 进制数
//         memset(d,-1,sizeof d);
//         int num = 0;
//         do {
//             d[num++] = c % m;
//             c = c / m;
//         }while (c != 0);
//         for(int i = num -1;i>=0;i--)
//         {
//             printf("%d",d[i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }