#include<stdio.h>
void freq(int [],int [],int);
int main()
{
    int a[20],i,n,j,fer[20],count;
    printf("enter the size of an array :- ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("elements of a[%d] =  ",i);

        scanf("%d",&a[i]);
        fer[i]=-1;

    }
    freq(a,fer,n);
}
void freq (int a[],int fer[], int n)
{
    int j,i,count;
    for(i=0; i<n; i++)
    {
        count=1;
        for(j=1+i; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                fer[j]=0;
            }
        }
        if(fer[i]!=0)
        {
            fer[i]=count;
        }

    }
    for(i=0; i<n; i++)
    {
        if(a[i]!=0)
        {
            printf("frequancy of %d is %d \n",a[i],fer[i]);
        }
    }
}




