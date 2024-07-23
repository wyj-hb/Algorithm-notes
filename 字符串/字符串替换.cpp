#include <bits/stdc++.h>
using namespace std;
/*
*   I love Tian Qin
    I
    You
 */

/*
 *  You love Tian Qin
 */
int ne[101];
int main()
{
    char s1[101],s2[101],s3[101];
    while(cin.getline(s1,101))
    {
        cin.getline(s2,101);
        cin.getline(s3,101);
        memset(ne,0,sizeof(int) * strlen(s2));
        //从1开始记录
        for(int i = 2,j = 0;i<=strlen(s2);i++)
        {
            while(j && s2[i] != s2[j]) j = ne[j-1];
            if(s2[i] == s2[j]) j++;
            ne[i] = j;
        }
        int begin = 0;
        for(int i = 0,j = 0;i<=strlen(s1);i++)
        {
            if(i == strlen(s1)) {
                //没输出完的
                printf("%.*s",strlen(s1) - begin,s1 + begin);
                break;
            }
            while(j && s1[i] != s2[j]) j = ne[j-1];
            if(s1[i] == s2[j]) {
                j++;
            }
            if(j == strlen(s2)) {
                //遍历完成
                printf("%.*s",i - strlen(s2) + 1 - begin,s1 + begin);
                printf("%s",s3);
                j = 0;
                begin = i + 1;
                if(begin == strlen(s1)) {
                    break;
                }
            }
        }
    }
    return 0;
}