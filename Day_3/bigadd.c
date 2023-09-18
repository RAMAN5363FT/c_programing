#include<stdio.h>
int main()
{
    int i;
    printf("enter the array number\n");
    int a[3][3];

    for(int i=0; i<3;i++);
    {
        for(int j=0; j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix number\n");
    for(int i =0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
        printf("%d\t",&a[i][j]);
        }
        printf("\n");
    }
    printf("addition\n");
    int add=0;
    for(int i = 0; i<3;i++)
    {
        for(int j=0; j<3; j++)
        {
            if((i+j==0) || (i+j==2) && (i!=1) || (i+j ==4))
            {
                add = add+a[i][j];
            }
        }
    }
    printf("%d\t",add);
    return 0;
}