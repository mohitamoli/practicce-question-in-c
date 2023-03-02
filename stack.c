#include<stdio.h>
#define max 20
int push(int [],int );
int pop(int [],int);
void display(int[], int);
void peek(int [],int );
int main()
{

    int a[max],ch,top=-1;
    do
    {
        printf("\n 1:push \n 2:pop \n 3:display \n 4:peek \n 5:exit\n");
        printf("enter the choice:- ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            top=  push(a,top);
            break;
        case 2:
            top=  pop(a,top);
            break;
        case 3:
            display(a,top);
            break;
        case 4:
            peek(a, top);
            break;
        case 5:
            printf("exit");
        }

    }
    while(ch<=5);


}
int push (int a[],int top)
{
    int i;
    if(top==max-1)
    {
        printf("satck is overflow");

    }
    else
    {
        printf(" enter the element:-");
        scanf("%d",&i);
        top++;
        a[top]=i;

        printf("elements is %d",a[top]);
    }
    return(top);
}
int  pop (int a[],int top)
{
    int i;
    if(top==-1)
    {
        printf("satck is empty");

    }
    else
    {


        i=a[top];

        printf(" poped elements is %d",a[top]);
        top--;
    }
    return(top);
}
void display(int a[],int top)
{ int i;
   if(top==-1){
    printf("no elements present ");
   }
   else{
     printf("displaying the content := ");
    while(top>=0){
        printf("%d \t ",a[top]);
        top--;
    }
   }

}
void peek(int a[], int top)
{
    if(top==-1){
    printf("no elements present ");
   }
   else{
    printf(" latest element is %d \t ",a[top]);
   }
}
