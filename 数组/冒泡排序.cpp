// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int data[11];
//     for(int i = 1;i<=10;i++) {
//         scanf("%d",&data[i]);
//     }
//     for(int i = 1;i<=9;i++) {
//         int flag = 0;
//         for(int j = 1;j<=10-i;j++) {
//             if(data[j] > data[j+1]) {
//                 flag = 1;
//                 swap(data[j+1],data[j]);
//             }
//         }
//         if(flag == 0) {
//             break;
//         }
//     }
//     for(int i = 1;i<=10;i++) {
//         printf("%d\n",data[i]);
//     }
//     return 0;
// }