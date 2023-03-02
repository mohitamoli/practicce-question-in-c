#include<stdio.h>
int main()
{
    void posi(int a[20],int n);
    void negi(int a[20], int n);
    void Z(int a[20], int n);
    int a[20],n,i;
    printf("enter the size of an array :- ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    printf("**************** \n");

    posi(a,n);
    negi(a,n);
    Z(a,n);

}
void posi(int a[],int n)
{
    int j;
    printf("positive numbers are in the array :- ");
    for(j=0; j<n; j++)
    {
        if(a[j]>0)
            printf("%d ",a[j]);

    }
    printf("\n");

}

void negi(int a[], int n)
{

    int j=0;
    printf("******************** \n");
    printf("negative numbers are in the array :- ");
    for(j=0; j<n; j++)
    {
        if(a[j]<0)
            printf("%d ",a[j]);

    }
    printf("\n");
}
void Z(int a[], int n)
{

    int j=0;
    printf("******************** \n");
    printf("zero  in the array :- ");
    for(j=0; j<n; j++)
    {
        if(a[j]==0)
            printf("%d ",a[j]);

    }
}
