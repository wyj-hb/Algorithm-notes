// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int d[20];
//     memset(d,0,sizeof d);
//     for(int i = 1;i<=n;i++)
//     {
//         int copy[20];
//         memcpy(copy,d,sizeof d);
//         //上下两层大小差为1
//         for(int j = 1;j<=i;j++)
//         {
//             if(i == 1)
//             {
//                 d[j] = 1;
//                 printf("%d ",d[j]);
//             }
//             else {
//                 d[j] = copy[j-1]+copy[j];
//                 printf("%d ",d[j]);
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }