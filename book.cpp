#include<iostream>
using namespace std;
class book{
    public:
    char bname[40];
    char bauthor[50];
    char genre[20];
    char lrole[50];
    int parts;
    int ypublished;
    int price;
    void get(){
        cout<<"enter the title of the book:";
        cin>>bname;
        cout<<"who is the author of the book:";
        cin>>bauthor;
        cout<<"enter the genre of the book:";
        cin>>genre;
        cout<<"who is the hero in the book:";
        cin>>lrole;
        cout<<"does this book have any parts or this one part book:";
        cin>>parts;
        cout<<"in which year it was released:";
        cin>>ypublished;
        cout<<"what is the cost of the book:";
        cin>>price;
    }
    void display(){
        cout<<"the title of the book is:"<<bname<<endl;
        cout<<"the author of the book is:"<<bauthor<<endl;
        cout<<"the genre of the book is:"<<genre<<endl;
        cout<<"the hero in the book:"<<lrole<<endl;
        cout<<"this book has:"<<parts<<"parts"<<endl;
        cout<<"it is released in the year:"<<ypublished<<endl;
        cout<<"the cost of the book is:"<<price<<endl;
        
    }
};
int main(){
    book b;
    b.get();
    b.display()
}