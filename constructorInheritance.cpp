class Machine
{
private:
    int id;
public:
    Machine():id(0)
    {
    cout<<"Machine no-argument constructor called"<<endl;
    }
    //copy constructor
    Machine(int id):id(id)
    {
    cout<<"Machine parameterized constructor called"<<endl;
    }
    void info()
    {
    cout<<"ID:"<<id<<endl;
    }    
};

//Vehicle is a subclass of Machine
class Vehicle: public Machine
{
public:
    Vehicel(int id):Machine(id)
    {
    cout<<"Vehicle parameterized constructor called"<<endl;
    }
    Vehicle(){
    cout<<"Vehicel no-argument constructor called"}<< endl;
};

int main()
{
    Car car;
    car.info();
    
    return 0;
}
