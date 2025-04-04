#include<stdio.h>
int main()
{
        int a[100][100],b[100][100],c[100][100],i,j,c1,r1;
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
        printf("Enter the elements in second matrix:");
        for(i=0;i<r1;i++)
        {
                for(j=0;j<c1;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }
        for(i=0;i<r1;i++)
        {
                for(j=0;j<c1;j++)
                {
                        c[i][j]=a[i][j]-b[i][j];
                }
        }
        printf("The substraction of matrix is\n");
        for(i=0;i<r1;i++)
        {
                for(j=0;j<c1;j++)
                {
                        printf("%d\t",c[i][j]);
                }
                printf("\n");
        }
        return 0;
}

