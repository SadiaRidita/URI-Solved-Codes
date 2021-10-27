#include<stdio.h>
using namespace std;
int main()
{
    int n,h;
    double m,SALARY;
    scanf("%d %d %lf",&n,&h,&m);
    SALARY = m * h;
    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %.2lf",SALARY);
    return 0;

}
