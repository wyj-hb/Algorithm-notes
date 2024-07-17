// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int data[11];
//     for(int i = 1;i<=9;i++) {
//         scanf("%d",&data[i]);
//     }
//     int d;
//     scanf("%d",&d);
//     for(int i = 1;i<=10;i++) {
//         if(data[i] > d) {
//             int cnt = 9;
//             while(cnt >=i ) {
//                 data[cnt + 1] =data[cnt];
//                 cnt--;
//             }
//             data[i] = d;
//             break;
//         }
//     }
//     for(int i = 1;i<=10;i++) {
//         printf("%d\n",data[i]);
//     }
//     return 0;
// }