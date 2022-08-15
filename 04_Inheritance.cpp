/**
 * Inheritance is the procedure in which one class 
 * inherits the attributes and methods of another class.
 * The class whose attributes and methods are inherited 
 * is known as the Parent/Base class.
 * The class that inherits the attributes and methods 
 * from the parent class is the Child/Derived class. 
*/
#include <bits/stdc++.h>
using namespace std;

class Shape{
protected:
int length, breadth;
public:
    Shape (int l) {
        length = l;
    }
    Shape(int l, int b) {
        length = l;
        breadth = b;
    }
    
};

class Rectangle : public Shape {
public:
    Rectangle(int l, int b) : Shape( l, b) {
        length = l;
        breadth = b;
    }
    int getArea() {
        return length * breadth;
    }
};

class Square : public Shape {
public:
    Square(int l) : Shape( l ) {
        length = l;
    }
    int getArea() {
        return length * length;
    }
};

int main() {
    Rectangle s1(7,5);
    Square s2(5);
    cout<<"s1.area = "<<s1.getArea()<<'\n';
    cout<<"s2.area = "<<s2.getArea()<<'\n';
}