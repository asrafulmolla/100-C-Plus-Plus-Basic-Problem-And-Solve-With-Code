#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    int age;
    ofstream file;
     file.open("Student_details.txt",ios::out|ios::app);//append
    for(int i=1;i<=3;i++)
    {
    cout<<"Enter your name: ";
    getline(cin,name);
    file<<name<<"\t";
    cout<<"Enter your age: ";
    cin>>age;
    file<<age<<endl;
    cin.ignore();
    }
  
    file.close();
    cout<<"Data is Stored"<<endl;
}