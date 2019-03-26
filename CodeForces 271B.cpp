#include<bits/stdc++.h>
using namespace std;
#define Max 10000000
#define mac 10000000
int arr[Max];
int a[500][500];
int main()
{
    int row=0;
    int r=0;
    for(int i=2; i<=mac; i++)
        arr[i]=0;
    int siz;
    siz=sqrt(mac);
    for(int i=2; i<=siz; i++)
    {
        for(int j=2; i*j<=mac; j++)
        {
            arr[i*j]=1;
        }
    }
    arr[1]=1;
    arr[0]=1;
    int n,m;
    int x,temp;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            temp=a[i][j];
            x=temp;
            if(arr[temp]==0)
            {
                a[i][j]=0;
            }
            else
            {
                while(1)
                {
                    x++;
                    if(arr[x]==0)
                    {
                        a[i][j]=x-temp;
                        break;
                    }
                }
            }

        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            r+=a[i][j];
        }
        if(i==0)
            row=r;
        else
        {
            if(r<row)
                row=r;
        }
        r=0;
    }
    r=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            r+=a[j][i];
        }
        if(r<row)
            row=r;
        r=0;
    }
    cout<<row<<endl;
    return 0;
}
