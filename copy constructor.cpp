#include<iostream>

using namespace std;
class student
{
    int roll_no,contact_no,licence_no;
    string name,div,Class;

    public:
    void getdata();
    void display();
    student(){}
    student(student&j)
    {
        roll_no=j.roll_no;
        name=j.name;
        contact_no=j.contact_no;
        licence_no=j.licence_no;
        div=j.div;
        Class=j.Class;
    }
};
   void student::getdata()
   {
        cout<<"Name of student=";
        cin>>name;

        cout<<"Div="<<div;
        cin>>div;
        cout<<"Class=";
        cin>>Class;
        cout<<"roll no=";
        cin>>roll_no;
        cout<<"contact_no=";
        cin>>contact_no;
        cout<<"Licence no=";
        cin>>licence_no;
    };



        void student::display()
        {
        cout<<"Name of student="<<name<<"\n";
        cout<<"Div="<<div<<"\n";
        cout<<"Class="<<Class<<"\n";
        cout<<"roll no="<<roll_no<<"\n";
        cout<<"contact_no="<<contact_no<<"\n";
        cout<<"Licence no="<<licence_no<<"\n";
        };

int main()
{

    student s;
    s.getdata();
    s.display();

    student s1(s);
    s1.display();
}

