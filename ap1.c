#include<stdio.h>
int main(){

int a[20],i,n,cd,d;
printf("enter the size :- ");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);

}
cd=a[i+1]-a[i];
printf("%d",cd);
for(i=0;i<n;i++){
    d=a[i+1]-a[i];
    if(cd==d){
        printf("series in ap \n");
    }
    else{
        printf("missing term  at this position %d \n",i);
    }
}

}
