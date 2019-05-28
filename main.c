#include <stdio.h>

double SumasParciales(double n)
{
    if (n==0) return 0;
    double j=0;
    for (int i=1; i<n; i++)
    {
        j=j+(1.0/i);
    }
    return j;
}

int CalculaRiemann(int* ptr)
{
    int i;
    for( i=0; SumasParciales(i)<*ptr; i++)
    {
        printf("%d ",i);
        printf("%f\n",SumasParciales(i));
    }
    printf("%f\n",SumasParciales(i));
    return i;

}

int main()
{
    int p;
    scanf("%d",&p);
    printf("%d",CalculaRiemann(&p));
}
