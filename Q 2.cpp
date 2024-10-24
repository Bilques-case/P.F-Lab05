#include<iostream>
using namespace std;
//lab 05 question 02
int main(){
int i;
int n;
int sum=0;
cout<<"Input the number upto which you want to find the sum => ";
cin>>n;
for(i=1;i<=n;i++){
    sum=sum+i;   
}
cout<<"The sum is :"<<sum<<endl;

    return 0;
}