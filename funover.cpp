#include<iostream>
using namespace std;
int area(int a,int b){
    cout<<"two parameters are given so rectangle ";
    cout<<"area:"<<2*(a+b)<<endl;
    return 0;
}
int area(int a){
    cout<<"one parameters is given so square ";
    cout<<"area:"<<a*a<<endl;
    return 0;
}
int main(){
    area(5);
    area(10,5);
}