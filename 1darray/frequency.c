#include<stdio.h>

int main()
{
    int a[20],i,n,j,fer[20],count;
    printf("enter the size of an array :- ");
    scanf("%d",&n);
    /*for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }*/
    printf("**************** \n");
    for(i=0;i<n;i++){
        printf ("element of %d : ",i);
        scanf("%d",&a[i]);
        fer[i]=-1;
    }
    for(i=0;i<n;i++){
            count=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
    fer[j]=0;
            }
        }
        if(fer[i]!=0){
        fer[i]=count;}
    }

 for(i=0;i<n;i++){
    if(a[i]!=0)
       {
           printf("frequency of %d is %d \n",a[i],fer[i]);
       }
 }
return 0;
}
