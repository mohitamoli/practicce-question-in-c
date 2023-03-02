#include<stdio.h>
void fun(int *);
int main(){
int a=20,x;
x=a;
printf("%d :- ",x);
fun(&x);

}
void fun(int *p){

(*p)=20+5;
printf("%d",*p);
}
