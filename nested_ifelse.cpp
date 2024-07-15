#include<iostream>
using namespace std;
int main(){

char ch;
cout<<"Symbol list: a=apple, b=ball,c=cricket,d=dark choco\n";
cout<<"Enter symbol:";
cin>>ch;
if(ch=='a'){
    cout<<"Price of apple:200";
}else if(ch=='b'){
    cout<<"price of ball:60";
}else if(ch=='c'){
    cout<<"Price of cricket:170";
}else if(ch=='d'){
    cout<<"price of dark choco:65";
}else{
    cout<<"Item not found";
}


    return 0;
}