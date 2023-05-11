#include<stdio.h>
int main(){
    int a;
    printf("Enter year: ");
    scanf("%d",&a);
    if(a%4==0){
        printf("This is a leapyear");
    }
    else{
        printf("This is not a Leapyear");
    }
}