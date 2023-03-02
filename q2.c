#include<stdio.h>
int  sum(int , int );
main(){
int a,b ,c;
printf(" enter the number  ");
scanf("%d%d",&a,&b);
c=sum(a,b);
printf("sum is %d",c);


}
int sum(int a,int b){

return(a+b);


}
