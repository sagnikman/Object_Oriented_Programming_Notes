/**
 * Constructor is a special method which is invoked automatically at the time of object creation. 
 * It is used to initialize the data members of new object generally. 
 * The constructor in C++ has the same name as class.
 * Types of constructors: default, parameterized and copy
*/
#include <bits/stdc++.h>
using namespace std;

class Fruit {
    private:
    string fruit_name,color;
    int quantity;

    public:
    //default constructor
    Fruit() {
        cout<<"default constructor\n";
        this->fruit_name = "default";
        this->color = "default";
        this->quantity = -1;
    }

    //parameterized constructor
    Fruit(string fruit_name, string color, int quantity) {
        this->fruit_name = fruit_name;
        this->color = color;
        this->quantity = quantity;
    }

    //copy constructor
    Fruit(Fruit &fruit) {
        fruit_name = fruit.fruit_name + " copy";
        color = fruit.color; 
        quantity = fruit.quantity;
    }

    void getDetails() {
        cout<<"Name: "<<fruit_name<<'\n';
        cout<<"Color: "<<color<<'\n';
        cout<<"Quantity: "<<quantity<<'\n';
    }
};

int main() {
    Fruit Apple("apple","red",20);
    Fruit Banana("banana","yellow",25);
    Fruit Orange;
    Fruit Apple2(Apple);

    Apple.getDetails();
    Banana.getDetails();
    Orange.getDetails();
    Apple2.getDetails();
}