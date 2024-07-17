// #include <bits/stdc++.h>
// using namespace std;
// double get(double d) {
//     if(d <=3) {
//         return d;
//     }
//     else {
//         return get(d-1) + get(d-2);
//     }
// }
// double get2(double d) {
//     if(d <= 3) {
//         return d;
//     }
//     else {
//         return get2(d-1) + get2(d-2);
//     }
// }
// int main()
// {
//     double data;
//     for(double i = 1;i<=20;i++)
//     {
//         double d = get(i+1);
//         double d2 = get(i);
//         data +=(d)/d2;
//     }
//     printf("%.6f\n",data);
//     return 0;
// }