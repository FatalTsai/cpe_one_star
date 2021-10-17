#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){

    string s;
    while(cin >> s && s!="0"){
        long long  sum[2] ={0,0};
        for(int i=0;i<s.length();i++){
            sum[i%2] += s[i]-'0';
            sum[0] -= sum[1];
            sum[1] = 0;

           
        }
        

      
        cout<<s<<" is "<<( (abs(sum[0]))%11 ? "not " : "");
        cout<<"a multiple of 11.\n";


    }







}