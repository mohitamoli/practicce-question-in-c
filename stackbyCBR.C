#include<stdio.h>
#define max 10
int push(int [], int *);
int pop(int [], int *);
void disp(int [], int *);
void peek(int [], int *);
int main()
{
    int a[max],ch,top=-1;
    do
    {
        printf("\n 1:push \n 2:pop \n 3:disp \n 4:peek \n 5:exit \n");
        printf(" enter the choice:- ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            top=push(a,&top);
            break;
        case 2:
            top=pop(a,&top);
            break;
        case 3:
            disp(a, &top);
            break;
            case 4: peek(a,&top);
            break;
            case 5: printf("default value");
            break;

        }
    }
    while(ch<=5);


}
int push(int a[], int *top)
{
    int n;

    if((*top)==max-1)
    {
        printf("stack is overflow ");

    }
    else
    {
        (*top)++;
        printf(" enter the element:- ");
        scanf("%d",&n);
        a[*top]=n;
        printf("element is stacked in array :- %d",a[*top]);
    }
    return (*top);
}
int pop(int a[], int *top)
{
    if((*top)==-1)
    {
        printf("stack is empty");

    }
    else
    {
        printf("poped element in the array :- %d", a[*top]);
        (*top)--;
    }
    return (*top);

}
void disp(int a[],int *top)
{
    if((*top)==-1)
    {
        printf("stack is empty");
    }
    else
    {

        printf("displaying the content :-");
        while((*top)>=0)
        {
            printf("%d \t ",a[*top]);
            (*top)--;
        }

    }
}
void peek(int a[], int *top){
    if((*top)==-1){printf("stack is empty");}
    else{
printf(" top element in the stack  :- %d \t ",a[*top]);
    }
}
