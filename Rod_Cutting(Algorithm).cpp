#include<iostream>
using namespace std;
struct RodPiece
{
    int length,profit;
};
void rodCutting(RodPiece arr[],int n,int N)
{
    int dp[n+1][n+1];
    int i,j;
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=N; j++)
        {
            if(i==0||j==0)
            {
                dp[i][j]=0;
            }
            else if(arr[i-1].length<=j)
            {
                dp[i][j]=max(arr[i-1].profit+dp[i][j-arr[i-1].length],dp[i-1][j]);
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }

    int res;
    res=dp[n][N];
    i=n;
    j=N;
    int cuts[N];
    int cutCount=0;
    while(i>0&&res>0)
    {
        if(dp[i][j]==dp[i-1][j])
        {
            i--;
        }
        else
        {
            cuts[cutCount]=arr[i-1].length;
            cutCount=cutCount+1;
            res-=arr[i-1].profit;
            j-=arr[i-1].length;
        }
    }
    cout<<"Maximum Obtainable Value = "<<dp[n][N]<<endl;
    cout<<"Cut sizes:";
    for(int k=0; k<cutCount; k++)
    {
        cout<<cuts[k]<<" ";
    }
}

int main()
{
    RodPiece rr[]= {{1,1}, {2,5}, {3,8}, {4,9}, {5,10}, {6,17}, {7,17}, {8,20}};
    int n =sizeof(rr)/sizeof(rr[0]);
    int N=8;
    cout<<n<<endl;
    rodCutting(rr,n,N);

}
/*
8
Maximum Obtainable Value = 22
Cut sizes:6 2
*/


