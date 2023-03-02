#include<stdio.h>
int main(){

 int a[20],i,n,j,count=0;
    printf("enter the size of an array :- ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    printf("**************** \n");
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(a[i]!=-9999 && a[i]==a[j] ){
                    a[j]=-9999;
             //   printf(" repeating element at index %d,%d is %d \n", i,j,a[i]);
                count++;
            }


            }
            if(a[i]!=-9999)
            printf("\nOcuurence of Element %d is %d ",a[i],count);

        }

    }






