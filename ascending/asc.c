#include<stdio.h>
int main()
{
        int i,j,n[10];
        int temp;
        for(i=0;i<10;i++)
        {
                printf("\n Enter no:");
                scanf("%d",&n[i]);
        }
        for(i=0;i<10;i++)
        {
                for(j=i+1;j<10;j++)
                {
                        if(n[i] > n[j])
                        {
                                temp=n[i];
                                n[i]=n[j];
                                n[j]=temp;
                        }
                }

        }
        printf("sorted list");
        for(i=0;i<10;i++)
        {
                printf("\n\t%d",n[i]);
        }
        return 0;
}
