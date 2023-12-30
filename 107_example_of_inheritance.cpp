#include<bits/stdc++.h>
using namespace std;

class person{
    public:
    string name;
    int age;
    void display1()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
 class student: public person //inheritance
 {
        //name//age//dispaly1()
        public:
        int id;
        void dispaly2()
        {
            display1();
            cout<<"ID : "<<id<<endl;
            
        }
    };
int main()
{
    student s1;
    s1.id=101;
    s1.name= "Asraful";
    s1.age=21;
    s1.dispaly2();
}