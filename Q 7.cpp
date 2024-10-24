#include<iostream>
using namespace std;
int main(){
    //Lab 05 question 07
    int no_of_subjects,marks;
    cout<<"Total number of subjects: ";
    cin>>no_of_subjects;
    for(int i=1;i<=no_of_subjects;i++){
        cout<<"Enter marks of subject "<<i<<"  ";
        cin>>marks;
        if(marks>=90){
            cout<<"Grade A"<<endl;   
        }
            else if (marks>=75 && marks<=89)
           { cout<<"Grade B"<<endl;}
            else if (marks>=50 && marks<=74)
           { cout<<"Grade C"<<endl;}
            else 
            {cout<<"Grade F"<<endl;}
    }

return 0;
}