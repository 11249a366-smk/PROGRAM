#include<iostream>
using namespace std;
class employee{
    public:
    char ename[25];
    char edesignation[25];
    int esalary;
    int ecutoff;
    int fsalary;
    void get(){
        cout<<"enter the name of the of the employee:";
        cin>>ename;
        cout<<"enter the designation:";
        cin>>edesignation;
        cout<<"enter the salary of the employee:";
        cin>>esalary;
        cout<<"enter the cutoff amount every month:";
        cin>>ecutoff;

    }
    void details(){
        fsalary=esalary-ecutoff;
    }
    void display(){
        cout<<"the name of the of the employee:"<<ename<<endl;
        cout<<"the designation you gave is:"<<edesignation<<endl;
        cout<<"the amount of salary is"<<esalary<<endl;
        cout<<"the final salary after all the cutoff is:"<<fsalary<<endl;
        
    }

};
int main(){
    employee sample;
    sample.get();
    sample.details();
    sample.display();



}
