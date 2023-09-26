#include <bits/stdc++.h>
using namespace std;

const int inf=1e7;
int main()
{
    int n;
    cin >> n;
    int dis[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int a;
            cin >> a;
            dis[i][j] = a;
            if (dis[i][j] == -1)
                dis[i][j] = inf;
        }
    }

    int mx = 0;

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {

                if (dis[i][k] + dis[k][j] < dis[i][j])
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                    mx=dis[i][k]+dis[k][j];
                }
            }
        }
    }


    cout << mx;

    return 0;
}