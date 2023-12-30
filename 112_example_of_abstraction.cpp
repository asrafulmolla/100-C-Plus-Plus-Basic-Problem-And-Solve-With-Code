#include<bits/stdc++.h>
using namespace std;

class mobileuser
{
    public:
    void call()
    {
        cout<<"Hello Codder"<<endl;
    }
    virtual void sendmessage()=0;
};

class rahim:public mobileuser
{
    public:
    void sendmessage()
    {
        cout<<"Hello i am Rahim"<<endl;
    }

};
class karim:public mobileuser
{
    public:
    void sendmessage()
    {
        cout<<"Hello i am karim"<<endl;
    }

};
int main()
{
    mobileuser *m;
    karim k;
    rahim r;
    m=&r;
    m->call();
    m->sendmessage();
    m=&k;
    m->sendmessage();
}