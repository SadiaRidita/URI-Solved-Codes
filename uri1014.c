#include<stdio.h>

int main()
{
    int x;
    double y;
    scanf("%d %lf",&x,&y);
    double z=x/y;
    printf("%.3lf km/l\n",z);
    return 0;
}
