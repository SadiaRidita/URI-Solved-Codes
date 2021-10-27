#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    double A,B,C,a,b,c,d,e;
    scanf("%lf %lf %lf",&A,&B,&C);
    a = (A*C)/2;
    printf("TRIANGULO: %.3lf\n",a);
    double pi;
    pi = 3.14159;
    b=pi*C*C;
    printf("CIRCULO: %.3lf\n",b);
    c=((A+B)/2)*C;
    printf("TRAPEZIO: %.3lf\n",c);
    d=B*B;
    printf("QUADRADO: %.3lf\n",d);
    e = A*B;
    printf("RETANGULO: %.3lf\n",e);
    return 0;



}
