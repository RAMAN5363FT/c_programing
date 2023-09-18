#include<stdio.h>
int main()
{ 
    int i,j;
    int a[2][2];
    int b[2][2];
    int c[3][4];

    printf("enter the number one array");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("\t%d",&a[i][j]);

        }
    }
         printf("matrix\n");
          for (int i=0;i<2;i++)
         {
            for(int j=0;j<2;j++)
            {
                printf("\t%d",a[i][j]);
            }
               
               printf("\n");
               
         }

          printf("enter the number two array");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("\t%d",&b[i][j]);

        }
    }
         printf("matrix\n");
          for (int i=0;i<2;i++)
         {
            for(int j=0;j<2;j++)
            {
                printf("\t%d",b[i][j]);
            }
               
               printf("\n");
               
         }
               printf("addition of two array\n");
               
               


         for(int i =0;i<2;i++)
         {
            for(int j=0;j<2;j++)
            {
                c[i][j]=a[i][j]+b[i][j];

                printf("\t%d",c[i][j]);
            }
            printf("\n");
         }

    return 0;
}