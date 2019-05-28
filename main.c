#include <stdio.h>
double SumasParciales(double n){

    if (n==0) return 0;

    return ((1.0/n)+SumasParciales(n-1));

}


int CalculaRiemann(int* ptr){
    int i;
    for( i=0;SumasParciales(i)<*ptr;i++){
            printf("%d ",i);
            printf("%f\n",SumasParciales(i));
    }
    printf("%f\n",SumasParciales(i));
    return i;

}




int main(){

int p;
scanf("%d",&p);
printf("%d",CalculaRiemann(&p));
}
