#include <stdio.h>
#include <math.h>
#define eps 1e-7
double factor(int n1);
int main(){
    double a,b,x;
    int n;
    a=0;
    scanf("%lf",&x);
    for(n=1;;n++)
    {
        b=(pow(x,2*n-1)*pow(-1,n-1))/factor(2*n-1);
        // printf("%d %lf\n",n, b );
        if(fabs(b)>=eps){
            a+=b;
        }else{
            break;
        }
    }
    printf("%lf",a);
    return 0;
}

double factor(int n1)
{
    int i;
    double m;
    for (i=1,m=1;i<=n1;i++){
        m*=i;
    }
    return m;
}
