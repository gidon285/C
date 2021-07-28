#include <stdio.h>
#include "myMath.h"

int main(){
    double ans1,ans2,ans3,x;
    printf("Please enter a real number: ");
    scanf("%lf.4 \n", &x);
    ans1 = Exponent(x);
    ans2 = Power(x,3);
    ans3 = sub(add(ans1,ans2),2.0);
    printf("The value of f(x) = e^x+x^3-2 at the point %0.4f is : %0.4f",x,ans3);
    printf("\n");
    ans1 = mul(x,3);
    ans2 = Power(mul(x,2),2);
    ans3 = add(ans1,ans2);
    printf("The value of f(x) = 3x+2x^2 at the point %0.4f is : %0.4f",x,ans3);
    printf("\n");
    ans1 = mul(x,2);
    ans2 = div(Power(mul(x,4),3),5);
    ans3 = sub(ans2,ans1);
    printf("The value of f(x) = (4x^3)/5-2x at the point %0.4f is : %0.4f",x,ans3);
    printf("\n");
    return 0;
}