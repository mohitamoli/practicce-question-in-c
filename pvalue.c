#include<stdio.h>
void posi( int [],int );
int main(){

/*int a[4]={1,-2,-3,4},i,j,n,temp;
n=sizeof(a)/sizeof(a[0]);
printf("size of an array :- %d \n", n);

j=0;
for(i=0;i<n;i++){
    if(a[i]<0){
        if(i!=j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
}
for(i=0;i<n;i++){

    printf(" %d",a[i]);
}

*/

int a[20],n,i;
printf("enter the size of an array:- ");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
posi(a,n);





}
void posi( int a[], int n){
int i,j,temp;
j=0;
for(i=0;i<n;i++){

    if(a[i]<0){
        if(i!=j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }

}
printf(" array of an new reversed array :- ");
for(i=0;i<n;i++){
    printf("%d \t ",a[i]);
}
}
