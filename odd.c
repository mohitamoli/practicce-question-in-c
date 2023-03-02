#include<stdio.h>
void odd( int [20] ,int );
void even( int [20],int );
int main(){
int a[20],n,i;
printf("enter the size of an array :- ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }    printf("**************** \n");

    even(a,n);
    odd(a,n);

}
void odd(int a[],int n){
    int i , count=0;
    printf("odd elements in the array are:- ");
     for(i=0; i<n; i++)
    {
        if(a[i]%2==1){
        printf("%d ",a[i]);
        count++;}

    }

    printf(" \n no. of odd elements are :- %d \n", count);
}
void even(int a[],int n){
    int i , count=0;
    printf("even elements in the array are:- ");
     for(i=0; i<n; i++)
    {
        if(a[i]%2==0){
        printf("%d ",a[i]);
        count++;}

    }

    printf(" \n no. of even elements are :- %d \n", count);
}
