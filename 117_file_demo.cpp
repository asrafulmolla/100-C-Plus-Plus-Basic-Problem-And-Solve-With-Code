#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    ofstream file;
    file.open("Student.txt");
    cout<<"Enter your name: ";
    getline(cin,name);
    file<<name<<endl;
    
    file.close();
}