#include<iostream>
using namespace std;
//Lab 05 question 03
int main(){
int number;
cout<<"Enter Number For Table = ";
cin>>number;
cout<<"\n";
for(int i=1;i<=10;i++){
cout<<" "<<number<<" * "<<i<<" = "<<number*i<<"\n";
}

return 0;
}