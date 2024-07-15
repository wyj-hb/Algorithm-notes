// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     double data;
//     scanf("%lf",&data);
//     double res;
//     if(data <= 100000) {
//         res = data * 0.1;
//     }
//     else if(data <200000) {
//         res = 100000 * 0.1 + (data - 100000) * 0.75;
//     }
//     else if(data < 400000) {
//         res = 100000 * (0.1 + 0.075) + (data - 200000) * 0.05;
//     }
//     else if(data<600000)  {
//         res = 100000 * (0.1 + 0.075 + 0.05) + (data - 400000) * 0.03;
//     }
//     else if(data<1000000)  {
//         res = 100000 * (0.1 + 0.075 + 0.05 + 0.03) + (data - 600000) * 0.015;
//     }
//     else {
//         res = 100000 * (0.1 + 0.075 + 0.05 + 0.03 + 0.015) + (data - 1000000) * 0.015;
//     }
//     printf("%.02f",res);
//
//     return 0;
// }