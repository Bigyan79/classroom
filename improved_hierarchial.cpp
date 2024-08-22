#include<iostream>
using namespace std;
class Shape {
public:
    int length;
    int breath;
    
    void get_data(int length, int breath) {
        this->length = length;
        this->breath = breath;
    }
};

// Inheriting Shape class
class Rectangle : public Shape {
public:
    int rect_area() {
        int result = length * breath;
        return result;

    }
};

// Inheriting Shape class

class Triangle :public Shape { 
public:
    int triangle_area() {
        float result = 0.5 * length * breath;
        return result;
    }
};

int main(int argc, char** argv)
{
    std::cout << "Hello World" << std::endl;

    return 0;
}