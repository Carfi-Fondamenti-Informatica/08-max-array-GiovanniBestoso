#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  int n=0;cin>>n;
    float numeri[n];
    for (int i = 0; i < n; i++) {
        cin>>numeri[i];
    }
    float x=0;
    for (int i = 1; i < n;i++) {
        float y= nmaggiore(numeri[i], numeri[i-1]);
        if (y>x){
            x=y;
        }
    }cout<<x<<endl;
  return 0;
}
