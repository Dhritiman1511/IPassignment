#include <stdio.h>
float main(){
    float r,r1,r2,r3,r4,R;
    r=r1=r2=r3=r4=R=0;
    printf("Enter total units: ");
    scanf("%f",&r);
    if(r>250){
        r1=(r-250)*1.5;
        r=250;
    }
    if(r>150){
        r2=(r-150)*1.2;
        r=150;
    }
    if(r>50){
        r3=(r-50)*0.75;
        r=50;
    }
    if(r>0){
        r4=(r*0.5);
    }
    R=r1+r2+r3+r4;
    R=1.2*R;
    printf("Total Bill = %.2f",R);
    return 0;
}