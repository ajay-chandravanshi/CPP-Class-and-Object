#include<iostream>
using namespace std;
class info
{
    public:
    int rollno=1;
    string name="ajay";
    string id=2
    void display()
    {
        cout<<rollno<<name<<id;
    }
};
int main()
{
info obj;
obj.display();
}
