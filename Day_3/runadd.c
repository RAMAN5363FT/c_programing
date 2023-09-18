#include<stdio.h>
int main()
{
    int a[3][3];
    printf("enter the array number\n");
       for(int i = 0;i<3;i++)
       {
        for(int j =0;j<3; j++)
        {
           scanf("%d\t",&a[i][j]);
        }
       }
       printf("matrix number\n");
       for(int i=0;i<3;i++)
       {
         for(int j=0;j<3;j++)
         {
            printf("%d\t",a[i][j]);
         }
                   printf("\n");
       }
       printf("addition of two array\n");
       int add= 0;
       for(int i = 0;i<3;i++)
       {
        for(int j = 0;j<3;j++)
        {
            if((i+j==1) || (i+j==3))
            {
        // printf("%d\n",a[i][j]);
                add = add+a[i][j];
            }
        }
       }
       printf("%d\t",add);
    return 0;
}