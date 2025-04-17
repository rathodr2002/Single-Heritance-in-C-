//rite a C++ program to display the operation of inheritance (all types of inheritances). 
//single inheritance
#include<iostream>
using namespace std;
class Car
{
    public:
    string name="Verna";
    int price= 32000;
    Car()
    {
        cout<<name<<" having Price :"<<price;
    }
};

class vehicle : public Car
{

};
int main()
{
    vehicle v;
    return 0;
}