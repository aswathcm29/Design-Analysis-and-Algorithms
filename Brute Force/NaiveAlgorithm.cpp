#include<iostream>
#include<string.h>
using namespace std;
int main(){
  int n,m,i,j,count=0;
  string text;
  string pattern;
  cout<<"enter text: ";
  cin>>text;
  cout<<"enter pattern: ";
  cin>>pattern;
  n=text.size();
  m=pattern.size();
  for (i = 0; i <= n-m; i++) {
        for (j = 0; j < m; j++)
          if (text[i + j] != pattern[j])
              break;
        if (j==m)
        {
          cout << "text is found\n";
          count++;
        }     
    }
  cout<<count;
}
