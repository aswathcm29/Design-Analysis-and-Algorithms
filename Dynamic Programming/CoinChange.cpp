#include <iostream>
using namespace std;
int count(int coins[],int n,int w){
  int a[n+1][w+1];
  for(int i=1;i<=n;i++){
    for(int j=1;j<=w;j++){
      a[i][0]=1;
      if(coins[i-1]>w){
        a[i][j]=a[i-1][j];
      }
      else{
        a[i][j]=a[i-1][j]+a[i][j-coins[i-1]];
    }
  }
  }
  return a[n][w-1];
}
int main() {
  int coins[] = {2,3,5,10};
  int n=4;
  int w=15;
  int ways=count(coins,n,w);
  cout<<ways;
  return 0;
}

  
