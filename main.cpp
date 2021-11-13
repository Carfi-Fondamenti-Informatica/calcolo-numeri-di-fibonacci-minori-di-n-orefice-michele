#include <iostream>
using namespace std;

int main() {
   int i=0, suc=1, prec=0, ris=0, n=0;
    cin>>n;
    prec=i;
    if (n!=0){
        cout<<"1"<<endl;
    }
    for (int i = 1; i <=n ; i++) {
        ris=(prec+suc);
        prec=suc;
        suc=ris;
        if (ris<=n){
            cout<<ris<<endl;
        }
        
    }
   return 0;
}
