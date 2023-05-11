// C Program to Swap Two Numbers using and without using third variable
#include<stdio.h>
int main(){
    int p,q,t;
    printf("enter a and b: ");
    scanf("%d%d",&p,&q);

// with third variable

    t=p;
    p=q;
    q=t;

    printf("After swapping a and b are %d %d \n",p,q);

// without third variable

int a,b;
    printf("enter a and b: ");
    scanf("%d%d",&a,&b);
   
    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swapping a and b are %d %d",a,b);

    return 0;

}