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
        void setvalue(double x, double y)
        {
            id=x;
            cgpa=y;
        }
};
int main()
{
    student alim,asraful;
    alim.setvalue(101,3.44);
    alim.display();
    asraful.setvalue(102,3.98);
    asraful.display();
}