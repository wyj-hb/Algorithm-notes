// #include <bits/stdc++.h>
// using namespace std;
// /*
//     4
//     1 2 3 4
//     3
//     4
//     1 2 3 6
//     5
//     4
//     4 2 3 6
//     3
//  */
//
// /*
//  *2
//  */
// int n;
// vector<int> v;
// void solve(int data) {
//     int l = 0;int r = v.size() - 1;
//     while(l < r) {
//         int mid = l + r + 1 >> 1;
//         if(v[mid] <= data) l = mid;
//         else {
//             r = mid - 1;
//         }
//     }
//     if(v[l] != data) {
//         printf("-1\n");
//     }
//     else {
//         printf("%d\n",l);
//     }
// }
// int main()
// {
//     while(scanf("%d",&n) != EOF) {
//         int data;
//         while(n--) {
//             scanf("%d",&data);
//             v.push_back(data);
//         }
//         sort(v.begin(),v.end());
//         scanf("%d",&data);
//         solve(data);
//         v.clear();
//     }
// }