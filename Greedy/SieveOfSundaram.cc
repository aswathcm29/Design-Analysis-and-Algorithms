#include <bits/stdc++.h>
using namespace std;

void sieveOfsun(int n){
    int newN=(n-1)/2;
    bool marked[newN+1];
    memset(marked,false,sizeof(marked));
    
    for(int i=1;i<=newN;i++){
        for(int j=i;(i+j+2*i*j)<=newN;j++){
            marked[i+j+2*i*j]=true;
        }
    }
    cout<<"Prime numbers between 1 and "<<n<<" are :";
    if(n>2)cout<<2<<" ";
    for(int i=1;i<=newN;i++){
        if(marked[i]==false){
            cout<<2*i+1<<" ";
        }
    }
    
}

int main() {
    int n=20;
    sieveOfsun(n);
    return 0;
}