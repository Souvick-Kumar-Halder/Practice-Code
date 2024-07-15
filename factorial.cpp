#include<iostream>
using namespace std;
int main(){
int i,fact,n;
fact=1;
cin>>n;
for(i=1;i<=n;i=i+1){
    fact=fact*i;
}
cout<<fact;



    return 0;
}