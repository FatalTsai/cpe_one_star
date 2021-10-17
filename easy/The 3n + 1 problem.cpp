#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,b;
    while(cin >> a>> b){
        cout<<a<<" "<<b<<" ";
        if(a>b){swap(a,b);}

        int maxLen = -1;
        for(int k=a;k<=b;k++){
            int n=k,len=1;
            while(true){
                if(n==1) break;
                if(n%2)n=n*3+1;
                else n/=2;
                len++;


            }
            maxLen = max(len,maxLen);
        }
        cout<<maxLen<<endl;

    }



    return 0;




}