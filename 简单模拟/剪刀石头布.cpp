// #include <bits/stdc++.h>
// using namespace std;
// /*
//     10
//     C J
//     J B
//     C B
//     B B
//     B C
//     C C
//     C B
//     J B
//     B C
//     J J
//  */
//  /*
//     5 3 2
//     2 3 5
//     B B
//   */
// int res1[4];
// int res2[4];
// int r1[26];
// int r2[26];
// //C是锤子、J是剪刀、B是布
// void compare(char c1,char c2) {
//     if(c1 == c2) {
//         res1[2]++;
//         res2[2]++;
//     }
//     else if((c1 == 'C' && c2 == 'J') || (c1 == 'J' && c2 == 'B') || (c1 == 'B' && c2 == 'C')) {
//         //不相等
//         res1[1]++;
//         res2[3]++;
//         r1[c1 - 'B']++;
//     }
//     else
//     {
//         //B胜利
//         res2[1]++;
//         res1[3]++;
//         r2[c2 - 'B']++;
//     }
// }
// void out(int r[]) {
//     if(r[0] >= r[1]) {
//         if(r[0] >= r['J' - 'B']) {
//             printf("%c ",'B');
//         }
//         else {
//             printf("%c ",'J');
//         }
//     }
//     else {
//         if(r[1] >= r['j' - 'B']) {
//             printf("%c ",'C');
//         }
//         else {
//             printf("%c ",'J');
//         }
//     }
// }
// int main()
// {
//     int n;
//     char c1,c2;
//     scanf("%d",&n);
//     while(n--) {
//         cin>>c1>>c2;
//         compare(c1,c2);
//     }
//     printf("%d %d %d\n",res1[1],res1[2],res1[3]);
//     printf("%d %d %d\n",res2[1],res2[2],res2[3]);
//     out(r1);out(r2);
//     memset(r1,0,sizeof r1);
//     memset(r2,0,sizeof r2);
//     memset(res1,0,sizeof res1);
//     memset(res2,0,sizeof res2);
//     return 0;
// }