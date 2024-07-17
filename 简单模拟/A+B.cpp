// #include <bits/stdc++.h>
// using namespace std;
// /*
//     -234,567,890 123,456,789
//     1,234 2,345,678
//     ^D
//  */
//
// /*
//    -111111101
//     2346912
// */
// typedef long long LL;
// int main()
// {
//     int a;
//     int num1 = 0;
//     int num2 = 0;
//     bool flag = 0;
//     bool flag1 = 1;
//     while(true)
//     {
//         //num1
//         while(scanf("%d",&a) != EOF)
//         {
//             flag1 = 0;
//             if(a < 0) {
//                 flag = 1;
//             }
//             num1 = num1 * 1000 + abs(a);
//             char c = getchar();
//             if(c != ',') {
//                 break;
//             }
//         }
//         if(flag) {
//             num1 = -num1;
//             flag = 0;
//         }
//         if(flag1) {
//             break;
//         }
//         //num2
//         while(scanf("%d",&a) != EOF)
//         {
//             if(a < 0) {
//                 flag = 1;
//             }
//             num2 = num2*1000 + abs(a);
//             char c = getchar();
//             if(c != ',') {
//                 break;
//             }
//         }
//         if(flag) {
//             num2 = -num2;
//             flag = 0;
//         }
//         printf("%ld\n",num1+num2);
//         num1 = num2 = 0;
//         flag1 = 1;
//     }
// }