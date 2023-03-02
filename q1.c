#include<stdio.h>
#define max 100
oddn(int [],int );
void main()
{

    int a[max],n,i;
    printf("enter the size of an array:- ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf(" print the elements of an array \n");
    for(i=0; i<n; i++)
    {
        printf("%d \n",a[i]);
    }

    oddn(a,n);
    printf("%d",a[i]);
}
int oddn( int a[max], int n){


while(i<n){
    if(a[i]%2!==0)
        return (a[i]);

}i++;


}
