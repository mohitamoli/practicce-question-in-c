#include<stdio.h>
void swap(int [20],int );
int main()
{
    int a[20],i,n;
    printf("enter the size of an array :- ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    printf("**************** \n");
/*j=n;
for(i=0;i<n/2;i++){
    temp=a[i];
    a[i]=a[j-1];
    a[j-1]=temp;
    j--;


}
for(i=0;i<n;i++){
    printf("%d",a[i]);
}*/
swap(a,n);

}
void swap(int a[], int n){
int j=n,i,temp;
for(i=0;i<n/2;i++){
    temp=a[i];
    a[i]=a[j-1];
    a[j-1]=temp;
    j--;


}
printf("swapping of  elements of an array:- \n");
for(i=0;i<n;i++){
    printf("%d\n",a[i]);
}
}
