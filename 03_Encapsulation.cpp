/**
 * Encapsulation is a mechanism of wrapping the data (variables) and code acting on the data (methods) together as a single unit. 
 * In encapsulation, the variables of a class will be hidden from other classes, and can be accessed only through the methods of their current class. 
 * Therefore, it is also known as data hiding.
 */
#include <bits/stdc++.h>
using namespace std;

class Employee {
    private:
        string name;
        int id, age;
    
    public:
    void setEmployee(int id, int age, string name) {
        this->id = id;
        this->name = name;
        this->age = age;
    } 
    void getEmployee() {
        cout<<"ID: "<<id<<'\n';
        cout<<"Name: "<<name<<'\n';
        cout<<"Age: "<<age<<'\n';
    }
};

int main() {
    Employee john;
    john.setEmployee(1,28,"John");
    john.getEmployee();
}