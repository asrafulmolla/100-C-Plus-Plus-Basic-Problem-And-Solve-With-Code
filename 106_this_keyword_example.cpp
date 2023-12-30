#include<bits/stdc++.h>
using namespace std;

class student {
    public:
            string name;
           student(string name)//contractor
           {
            this-> name=name;
           }
           void display()
           {
            cout<<name<<endl;
           }
};
int main()
{
    student s1("Asraful");
    s1.display();
}