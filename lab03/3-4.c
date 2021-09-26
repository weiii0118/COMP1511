#include <stdio.h>
int main(){
    int a,b;
    double c;
    printf("enter the total number of marks in the exam:");
    scanf("%d",&a);
    printf("enter the number of marks the student was awarded:");
    scanf("%d",&b);
    c=(double)b/(double)a;
    c=c*100.;
    printf("the student scored %.lf%% in this exam.\n",c);
    return 0;
}