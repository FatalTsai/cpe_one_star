#include <cstdio>

void bangla( long long int n){
    if(n>=10000000){
        bangla(n/10000000);
        printf(" kuti");
        n%=10000000;
        if(n>0)printf(" ");

    }
    if(n>=100000){
        printf("%lld lakh",n/100000);
        n%=100000;
        if(n>0)printf(" ");
    }
    if(n>=1000){
        printf("%lld hajar",n/1000);
        n%=1000;
        if(n>0)printf(" ");

    }
    if(n>=100){
        printf("%lld shata",n/100);
        n%=100;
        if(n>0)printf(" ");

    }
    if(n){
        printf("%lld",n);
    }

}



int main(){

    long long int n=0;

    int kase=1;
    while(scanf("%lld",&n)!=EOF){

        printf("%4d. ",kase);
        if(n == 0)printf("0");
        else{
            bangla(n);
            // if(n%100 == 0)printf(" 0");
        }

        putchar('\n');
        kase++;
    } 






}