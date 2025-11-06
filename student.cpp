#include<iostream>
using namespace std;
class student{
    public:
    char sname[30];
    char sreg[10];
    int syear;
    char sdept[25];
    int subjects;
    int marks[10];
    int total=0;
    int avg=0;
    void get(){
        cout<<"enter the name of the student:";
        cin>>sname;
        cout<<"enter your register number:";
        cin>>sreg;
        cout<<"currently which year are you pursuing in your university:";
        cin>>syear;
        cout<<"which department have you choosen:";
        cin>>sdept;
        cout<<"how many subjects are you studying now:";
        cin>>subjects;
        
    }
    void details(){
        for(int i=1;i<=subjects;i++){
            cout<<"enter the marks of the subject:"<<i;
            cin>>marks[i];
            total+=marks[i];
        }
            avg=total/subjects;

    }
    void display(){
        cout<<"the name of the student is"<<sname<<endl;
        cout<<"the register number of the student is:"<<sreg<<endl;
        cout<<"the total marks are:"<<total<<endl;
        cout<<"the average is:"<<avg<<endl;

    }
};
int main(){
    student sample;
    sample.get();
    sample.details();
    sample.display();
}
