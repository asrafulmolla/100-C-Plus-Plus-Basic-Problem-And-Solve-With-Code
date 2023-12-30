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
};
int main()
{
    student alim,asraful;
    alim.id=101;
    alim.cgpa=3.93;
    alim.display();
    asraful.id=102;
    asraful.cgpa=3.99;
    asraful.display();
}