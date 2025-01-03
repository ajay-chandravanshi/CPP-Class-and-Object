#include<iostream>
using namespace std;
class info
{
    public:
    int rollno=1;
    string name="ajay";
    void display()
    {
        cout<<rollno<<name;
    }
};
int main()
{
info obj;
obj.display();
}
