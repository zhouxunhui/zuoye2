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
	
	int ans=0,dp[n+1]={0};             //��̬�滮 
	for(int i=1;i<=n;i++)
	{
		dp[i]=max(dp[i-1]+a[i],a[i]);  //dp[i]��ʾ���±�iָ���Ԫ�ؽ�β����������������� 
		ans=max(ans,dp[i]);
	}
	printf("%d",ans);
	return 0;
}
