#include "myMath.h"

double Exponent (int x) {
    return Power(e,x);
}

double Power (double x , int y) {
    double ans=1;
    if (y==0) {
        return 1;
    } else if (y==1) {
        return x;
    } else if (y>1) {
        ans=x;
        for (int i=1; i<y; i++) {
            ans *= x;
        }
        return ans;
    } else if (y < 0) {
        ans=x;
        for (int i=1; i<y; i++) {
            ans *= x;
        }
        return 1/ans;
    }
    return ans;
}
