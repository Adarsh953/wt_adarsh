#include<stdio.h>
int main()
{
        int a[100][100],b[100][100],c[100][100],i,j,c1,r1,r2,c2,k,sum;
        printf("Enter the number of rows in matrix:");
        scanf("%d",&r1);
        printf("Enter the number of columns in matrix:");
        scanf("%d",&c1);
        printf("Enter the elements in first matrix:");
        for(i=0;i<r1;i++)
        {
                for(j=0;j<c1;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }
	printf("Enter the number of rows in matrix:");
        scanf("%d",&r2);
        printf("Enter the number of columns in matrix:");
        scanf("%d",&c2);
	if(r2!=c1)
        {
                printf("invalid matrices for multiplication\n");
        }
        else
	{
        	printf("Enter the elements in second matrix:");
		 for(i=0;i<r2;i++)
        	{
                	for(j=0;j<c2;j++)
                	{
                        	scanf("%d",&b[i][j]);
                	}
		}
		for(i=0;i<r1;i++)
        	{
                	for(j=0;j<c2;j++)
                	{
                        	for(k=0;k<c1;k++)
				{
					sum=sum+a[i][k]*b[k][j];
				}
				c[i][j]=sum;
				sum=0;
                	}
        	}
		printf("product of matrices\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
}
