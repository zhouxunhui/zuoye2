#include<stdio.h>
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n+1]={0};
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	int ans=0,dp[n+1]={0};             //动态规划 
	for(int i=1;i<=n;i++)
	{
		dp[i]=max(dp[i-1]+a[i],a[i]);  //dp[i]表示以下标i指向的元素结尾的所有子数组的最大和 
		ans=max(ans,dp[i]);
	}
	printf("%d",ans);
	return 0;
}
