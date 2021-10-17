#include<iostream>
#include<cstdlib>
using namespace std;



int main(int argc, char){

    long long int a,b;

    while(scanf("%ld %ld",&a,&b) == 2){
        cout << abs(a-b) << endl;


    }

    return 0;
}