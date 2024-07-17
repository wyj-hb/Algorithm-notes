// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     //利用反余弦可以求取pi
//     double data;double cnt = 1;int status = 1;
//     while(true) {
//         double d = status == 1 ? 1 / cnt : -1/cnt;
//         if(abs(d) < 1e-6) {
//             printf("PI=%10.8f",data * 4);
//             break;
//         }
//         status = 1 - status;
//         cnt +=2;
//         data +=d;
//     }
//     return 0;
// }