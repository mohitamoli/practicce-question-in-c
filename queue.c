#include<stdio.h>
#define max 4
int  enqueue( int [],int );
int dqueue(int [], int, int );
void disp(int [], int, int );

int main()
{
    int a[max],ch,R=-1,F=-1;
    do
    {
        printf("\n 1: equeue \n 2:dqueue \n 3:display \n 4:exit \n ");
        printf("enter the choice:-");
        scanf("%d",&ch);
        switch(ch)
        {

        case 1:
            R= enqueue(a,R);
            if(F==-1)
            {
                F=0;
            }
            break;
        case 2:
            F= dqueue(a,F,R);
            if(F==-1)
            {
                R=-1;
            }
            break;
        case 3:
            disp(a,F,R);
            break;
        default :
            printf("invalid choice");
            break;





        }
    }
    while(ch<=4);


}
int enqueue(int a[], int R)
{
    int n;
    if(R==max-1)
    {
        printf("queue is overflow \n");
    }
    else
    {
        printf("enter the element:-");
        scanf("%d",&n);
        R++;
        a[R]=n;
        printf("equeued element in array  :-%d",a[R]);


    }
    return (R);

}
int dqueue( int a[], int F, int R)
{

    if(R==-1&&F==-1)
    {
        printf("queue is empty");
    }
    else
    {
        if(F==R)
        {

            printf("deleted element is :- %d",a[F]);
            F=R=-1;

        }
        else
        {

            printf("deleted element is :- %d",a[F]);
            F++;
        }


    }
    return (F);
}
void disp(int a[], int F, int R){
 if(R==-1&&F==-1)
    {
        printf("queue is empty");
    }
    else{
        while(F<=R){
            printf("%d\t",a[F]);
             F++;
        }

    }
}


