#include<stdio.h>
int main()
{

    int A[100],n,temp,i,j;
    printf("Enter the number of elements\n:");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(A[j]>A[j+1])
            {
                temp = A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("Sorted List%d\n",A[i]);
    }
    return 0;
}