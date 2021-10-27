#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,s,ab, result;
    scanf("%d %d %d",&a,&b,&s);
    ab = ((a+b)+(abs(a-b)))/2;

    result = ((ab + s) + abs(ab - s))/2;

    printf("%d eh o maior\n",result);
    return 0;



}
