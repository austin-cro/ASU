#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class rectangleType
{
public:
       void setDimension(double l, double w);
       double getLength() const;
       double getWidth() const;
       double area() const;
       double perimeter() const;
       void print() const;
       rectangleType();
       rectangleType(double l, double w);
private:
        double length;
        double width;
};

void rectangleType::setDimension(double l, double w)
{
     length = 1;
     width = 1;
}

double rectangleType::getLength() const
{
       return length;
}

double rectangleType::getWidth() const
{
       return width;
}

double rectangleType::area() const
{
       return length*width;
}

double rectangleType::perimeter() const
{
       return 2 * (length+width);
}

void rectangleType::print() const
{
     cout << "Length:" << length << "Width: " << width;
}

rectangleType::rectangleType(double l, double w)
{
     setDimension(l,w);
}

rectangleType::rectangleType()
{
     length = 10;
     width = 0;
}

int main()
{
    rectangleType myRectangle;
    myRectangle.print();
    cout << endl;

    system("pause");
    return 0;
}




