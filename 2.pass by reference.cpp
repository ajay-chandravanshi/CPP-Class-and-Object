#include<iostream>
using namespace std;
class info
{
    public:
    int rollno;
    string name;
    void display(int rollno,string name)
    {
        cout<<rollno<<name;
    }
};
int main()
{
info obj;
obj.rollno=2;
obj.name="ajay";
obj.display(obj.rollno,obj.name);
}
