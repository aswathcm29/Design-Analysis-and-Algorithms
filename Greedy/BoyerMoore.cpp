#include <iostream>
#include<string.h>
using namespace std;

#define n1 256

void badCharHeuristic(string str,int size,int badchar[n1]){
  int i;
  for(i=0;i<n1;i++ ){
    badchar[i]=-1;
  }
  for(i=0;i<size;i++){
    badchar[(int)str[i]]=i;
  }  
}

void search(string text,string pattern){
  int n=text.length();
  int m=pattern.length();
  int badchar[n1];

  
  badCharHeuristic(pattern, m, badchar);

  int s=0;
  while(s<=(n-m)){
    int j=m-1;
    while(j>=0 && pattern[j]==text[s+j]){
      j--; 
    }
    if(j<0){
      cout<<"Pattern found at index "<<s<<endl;
      s+=(s+m<n)?m-badchar[text[s+m]]:1;
    }
    else{
      s+=max(1,j-badchar[text[s+j]]);
    }
  }
  
  
  
}

int main() {
  string text;
  string pattern;
  cout<<"enter text: ";
  cin>>text;
  cout<<"enter pattern: ";
  cin>>pattern;
  search(text, pattern);
  return 0;
}
