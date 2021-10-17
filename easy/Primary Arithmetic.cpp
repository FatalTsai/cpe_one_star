#include <iostream>
using namespace std;

void divide(int n,int arr[],int &cnt){
    for(cnt=0;n!=0;cnt++){
        arr[cnt] = n%10;
        n/=10;
    }

}


int main(){

    int a,b;
    // printf("%d\n",scanf("%d %d",&a,&b) );
    while(cin>>a>>b && (a!=0 || b!=0)){
        // printf("a = %d\n",a);
        int lenA,lenB;
        int arrA[1386] = {};
        int arrB[1386] = {};
        int sum[1387+87] ={};

        divide(a,arrA,lenA);
        divide(b,arrB,lenB);
        
        int lenM=max(lenA,lenB);
        int ans = 0;
        for(int i=0;i<lenM;++i){
            sum[i]+= arrA[i]+arrB[i];

            if(sum[i]>=10){
                sum[i]-=10;
                ans++;
                sum[i+1]++;
            }

        }

        if(ans == 0){
            cout<<"No carry operation.\n";
        }
        else if(ans == 1)
            cout<<ans<<" carry operation.\n";
        else{
            cout<<ans<<" carry operations.\n";
        }




    }


    return 0;




}