/**
 * Constructor is a special method which is invoked automatically at the time of object creation. 
 * It is used to initialize the data members of new object generally. 
 * The constructor in C++ has the same name as class.
*/
#include <bits/stdc++.h>
using namespace std;

class Fruit {
    private:
    string fruit_name,color;
    int quantity;

    public:
    Fruit(string fruit_name, string color, int quantity) {
        this->fruit_name = fruit_name;
        this->color = color;
        this->quantity = quantity;
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

    Apple.getDetails();
    Banana.getDetails();
}