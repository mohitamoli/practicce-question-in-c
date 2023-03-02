#include<stdio.h>
 void odd(int [],int);
 void even(int [],int);
main()
{
    int ar[20],n,i,s;
    printf("enter the size of an array:-");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d \n",ar[i]);
    }
   void odd(ar,n);
   void even(ar,n);

}
void odd(int ar[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(ar[i]%2==1)
        {
          printf("%d",ar[i]);
        }
    }
}
void even(int ar[],int n){
    int j;
    for(j=0; j<n; j++)
    {
        if(ar[j]%2==0)
        {
          printf("%d",ar[j]);
        }
    }
}
