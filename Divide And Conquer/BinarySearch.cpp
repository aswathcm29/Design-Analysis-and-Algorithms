#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cout<<"Enter array size:";
   cin>>n;
   vector<int>arr(n);
   int num;
   for(int i=0;i<n;i++){
     cin>>arr[i];
   }
   sort(arr.begin(),arr.end());
   cout<<"Enter key:";
   int key;
   cin>>key;
   int left=0;
   int right=n-1;
   int flag=0;
   while(left<=right){
     int mid=(left+right)/2;
     if(arr[mid]==key){
        flag=1;
        break;
     }
     else if(key>arr[mid]){
        left=mid+1;
     }
     else{
        right=mid-1;
     }
   }

   (flag==1)?cout<<"Key found":cout<<"Key not found";
}