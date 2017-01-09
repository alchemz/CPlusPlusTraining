#include <iostream>
using namespace std;

class Machine
{
private:
    int id;
public:
    //0=null
    Machine():id(0)
    {
    cout<<"Machine no-argument constructor called"<<endl;
    }
    //copy constructor
    Machine(int id):id(id)
    {
    cout<<"Machine parameterized constructor called"<<endl;
    }
    //a method of Machine
    void info()
    {
    cout<<"ID:"<<id<<endl;
    }    
};

//Vehicle is a subclass of Machine
class Vehicle: public Machine
{
//in side vehicle, we cannot call id(private)
public:
    Vehicel(int id):Machine(id)
    {
    cout<<"Vehicle parameterized constructor called"<<endl;
    }
    Vehicle(){
    cout<<"Vehicel no-argument constructor called"}<< endl;
};

class Car:public Vehicle
{
public: Car(){cout<<"Cat constructor called"<<endl;}
}
int main()
{
    Vehicle vehicle;
    vehicle.info();
    
    Car car;
    car.info();
    
    return 0;
}
