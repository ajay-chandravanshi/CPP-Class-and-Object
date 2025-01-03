#include<iostream>
using namespace std;
class info
{
    public:int roll=123;
    
};
class a:public info
{
    public:void display()
    {
        cout<<roll;
    }
};
int main()
{
a obj;
obj.display();
}
