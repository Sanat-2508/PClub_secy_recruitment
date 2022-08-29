#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
  
int random_number_generator(int l, int r){
    if(r<l){
        int t=l; l=r; r=t;
    }
    int temp=rand();
    return(r+(temp)%(r-l+1));
}

int main()
{
    int T=1e5;
    int N=1e9;
    srand(time(0));

    int t= random_number_generator(1,T);
    cout<<t<<'\n';
    for (int i = 0; i < t; i++){
            int a= random_number_generator(1,N);
            int b =random_number_generator(1,N);
            int x = random_number_generator(1,N);
            if( a < b){
                int t=a; a=b; b=t;
            }
            cout << a<<' ' << b<<' '<< x<<' '<<'\n';
    }

  
    return 0;
}
