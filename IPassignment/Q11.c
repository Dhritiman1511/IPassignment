#include<stdio.h>
int main(){
    int i,n1=0,n2=1,n3,n;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series: 1,");
    for(i=1;i<=n;i++){
        n3=n1+n2;
        printf("%d,",n3);
        n1=n2;
        n2=n3;
    }
return 0;
}