#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,z,x,v;
    printf("enter year:");
    scanf("%d",&z);
    a=z%19;
    b=z/100;
    c=z%100;
    d=b/4;
    e=b%4;
    f=(b+8)/25;
    g=(b-f+1)/3;
    h=(19*a+b-d-g+15)%30;
    i=c/4;
    k=c%4;
    l=(32+2*e+2*i-h-k)%7;
    m=(a+11*h+22*1)/451;
    x=(h+1-7*m+114)/31;
    p=(h+1-7*m+114)%31;
    v=p+1;
    printf("easter is ");
    if(x==1){printf("jan.");}
    if(x==2){printf("feb.");}
    if(x==3){printf("mar.");}
    if(x==4){printf("apr.");}
    if(x==5){printf("may.");}
    if(x==6){printf("jun.");}
    if(x==7){printf("jul.");}
    if(x==8){printf("aug.");}
    if(x==9){printf("sep.");}
    if(x==10){printf("oct.");}
    if(x==11){printf("nov.");}
    if(x==12){printf("dec.");}
    printf("%d in %d\n",v,z);
   

    

    
    
    return 0;
}