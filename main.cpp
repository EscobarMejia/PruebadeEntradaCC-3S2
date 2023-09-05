#include <iostream>
using namespace std;
int main(){
    long n, m, i, left = 0, right = 1000000000, mid;
    do{
        cin>>n>>m;   
    }while(!(n>=1 && n<=1000000 && m>=1 && m<=2000000000));
    
    
    int a[n];
    for(i = 0; i < n; i++){
        cin>>a[i];
    }
    long long temporal;
    while(left<=right){
        mid=(left+right)/2;
        temporal=0;
        for(int i=0;i<n;i++){
            if(a[i]>=mid){
                temporal+=a[i]-mid;
            }
        }
        if(temporal<m){
            right=mid-1;
        }else{
            left=mid+1;
        }
    }
    cout<<right;
    
   
    return 0;
    
}
