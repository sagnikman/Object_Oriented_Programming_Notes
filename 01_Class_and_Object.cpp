#include <bits/stdc++.h>
using namespace std;

class Rectangle {
    private:
        int length,breadth;

    public:
        int area(int l, int b) {
            length = l;
            breadth = b;
            return length * breadth; 
        }
};

int main() {
    Rectangle Obj1,Obj2;
    cout<<Obj1.area(5,12)<<'\n';
    cout<<Obj2.area(3,4);

}