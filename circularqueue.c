#define max 5
#include<stdio.h>
int enqueue(int [],int , int);
int dqueue (int [],int ,int);


int main(){

int a[max],ch,R=-1,F=-1;
do{

        printf("\n 1: equeue \n 2:dqueue \n 3:display \n 4:exit \n ");
        printf("enter the choice:-");
        scanf("%d",&ch);
        printf("%d %d \n",F,R);
        switch(ch)
        {

        case 1:R=enqueue(a, R, F);
                 if(F==-1){
                    F=0;
                 }
                 break;
        case 2: F= dqueue(a,R,F);
                 if(F==-1){
                    R=-1;
                 }
                 break;
}


}
while(ch<=4);
}
int enqueue(int a[],int R,int F){
    int n;
if((R+1)%max==F){
    printf("queue is full");}
    else if(R==max-1&&F!=0)
    {
        R=0;
          printf("enter the element:-");
        scanf("%d",&n);
        a[R]=n;
        printf(" element is %d",a[R]);
        R++;
    }
    else{
             printf("enter the element:-");
        scanf("%d",&n);
        R++;
        a[R]=n;
        printf("equeued element in array  :-%d",a[R]);


    }

return(R);

}
int dqueue(int a[],int R,int F){
if(F==-1&& R==-1){
    printf("queue is empty");
}
else
    {
        if(F==R)
        {

            printf("deleted element is :- %d",a[F]);
            F=R=-1;

        }
else{
      printf("deleted element is :- %d ",a[F]);
            F++;
            F=F%max;
}}

return (F);
}

