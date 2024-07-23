// #include <bits/stdc++.h>
// using namespace std;
// /*
//  *4 123 10
//  */
//
// /*
//  *27
//  */
// typedef long long LL;
// const int N = 70;
// char d[N];
// int main()
// {
//     map<int,char> m;
//     m.insert(make_pair(10,'A'));
//     m.insert(make_pair(11,'B'));
//     m.insert(make_pair(12,'C'));
//     m.insert(make_pair(13,'D'));
//     m.insert(make_pair(14,'E'));
//     m.insert(make_pair(15,'F'));
//     char s[N];LL a,b;
//     scanf("%lld%s%lld",&a,s,&b);
//     //a进制转为b进制
//     //先转为10进制
//     LL y = 0,p = 1;
//     for(int i = strlen(s)-1;i>=0;i--) {
//         if(s[i] - '0' > 9) {
//             //找
//             if(s[i] > 'F') {
//                 y += (s[i] - 'a' + 10) * p;
//             }
//             else {
//                 y += (s[i] - 'A' + 10) * p;
//             }
//         }
//         else {
//             y += (s[i] - '0') * p;
//         }
//         p = p*a;
//     }
//     //转换为b进制
//     int num = 0;
//     do {
//         if(y%b < 10) {
//             d[num++] = '0' + (y%b);
//         }
//         else {
//             d[num++] = m[y%b];
//         }
//         y = y / b;
//     }while (y != 0);
//     for(int i = num-1;i>=0;i--) {
//         printf("%c",d[i]);
//     }
//     return 0;
// }