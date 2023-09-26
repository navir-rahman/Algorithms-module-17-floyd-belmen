#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int dist[n+1][n+1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            int a;
            cin>>a;
            dist[i][j]=a;
        }
    }
    
        
for (int k = 1; k <=n; k++)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n ; j++)
        {
            if(dist[i][k]+ dist[k][j] < dist[i][j]){
                dist[i][j] = dist[i][k]+dist[k][j];
            }
        }
    }
}


    for (size_t i = 1; i <=n; i++)
    {
        for (size_t j = 1; j <=n; j++)
        {
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}