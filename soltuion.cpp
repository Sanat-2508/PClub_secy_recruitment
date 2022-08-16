#include <iostream>
using namespace std;

long long gcd(long long a, long long  b){
    if(a<b){
        long long t=a; a=b; b=t;
    }
    if(b==0) return a;
    return gcd(b,a%b);
}


int main(){
    int tt;
    cin>>tt;
    while(tt--){
        long long a,b,x;
        cin>>a>>b>>x;
        long long k=gcd(a,b);
        if((x%k)!=0) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }

    return 0;
}