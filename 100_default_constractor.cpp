#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        int id;
        double cgpa;
        void display()
        {
            cout<<id<<" "<<cgpa<<endl;
        }
        student(int x, double y) //constructor
        {
            id=x;
            cgpa=y;
        }
        student()
        {
            cout<<"Default Constractor "<<endl;
        }

};
int main()

{
    student ob;
    student alim(101,3.44);
    alim.display();
    student asraful(102,3.98);
    asraful.display();
}