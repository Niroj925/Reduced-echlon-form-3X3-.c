#include<stdio.h>
int main()
{
	int i,j;
	float m[5][5],m1[5][5],m2[5][5];
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("enter the  value of m[%d][%d]:",i,j);
			scanf("%f",&m[i][j]);
		}
	}
	for(i=1;i<=3;i++)
	{
		m1[1][i]=m[1][i]/m[1][1];
	}
	for(i=2;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(m[2][1]>0)
			{
				m1[i][j]=m[i][j]-m[i][1]*m1[1][j];
			}
			else
			{
				m1[i][j]=m[i][j]+m[i][j]*m[1][j]*(-1);
			}
		}
	}
	printf("entered matrix is:\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%f\t",m[i][j]);
		}
		printf("\n");
	}
    for(i=1;i<=3;i++)
    {
    	m2[1][i]=m1[1][i];
	}
	for(i=2;i<=3;i++)
	{
		m2[2][i]=m1[2][i]/m1[2][2];
	}
    for(i=2;i<=3;i++)
    {
    	if(m1[3][2]>0)
    	{
    		m2[3][i]=m1[3][i]-m1[3][i]*m2[2][i];
		}
		
		else
		{
			m2[3][i]=m1[3][i]+m1[3][i]*m2[2][i]*(-1);
		}
	}
	printf("Reduced Echlon form of entered matrix:\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%f\t",m2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
