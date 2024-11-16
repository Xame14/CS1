#include <iostream>
#include "rectangle.h"

using namespace std;

class Rectangle{
public:
    // Constructors used for initialization
    Rectangle();    // default contructor 
    Rectangle(double w, double l); // another constructor
    
    // getter functions often use const to make the function read-only
    double getWidth() const;    
    double getLength() const;   
    
    // setter functions
    void setWidth(double width);    
    void setLength(double length);

private:
    double w;
    double l;
};

Rectangle::Rectangle(){
    w = 0.0;
    l = 0.0;
}

Rectangle::Rectangle(double width, double length){
    w = width;
    l = length;
}

double Rectangle::getWidth() const{
    return w;
}

double Rectangle::getLength() const {
    return l;
}

void Rectangle::setWidth(double width){
    w = width;
}

void Rectangle::setLength(double length){
    l = length;
}

int main()
{
    /* Using a constructor to create/initialize an object of type Rectange */
    Rectangle rec5(7.7, 19.0);  
    cout << "Rectangle5 width: " << rec5.getWidth() << " and length: " << rec5.getLength() << endl; /* Invoking the getter functions to retrieve values */
 
 
    /* Using the default constructor to create an object of type Rectange, 
    then we invoke te setter functions to assign values*/
    Rectangle rec6;     
    rec6.setLength(8.9); 
    rec6.setWidth(5.5);
    
    cout << "Rectangle6 width: " << rec6.getWidth() << " and length: " << rec6.getLength() << endl; /* Invoking the getter functions to retrieve values */

    return 0;
}
