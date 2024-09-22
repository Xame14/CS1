#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.141592;
const string prof_name = "Miss. Valdez";

void compute_area_perimeter(double a,double b); //square and rectangle
void compute_area_perimeter(double c,double d,double e,double f); //triangle
void compute_area_perimeter(double g); //circle
//void compute_area_perimeter

void wel();

int main()
{
    wel();
   
    //square and rectangle
    //change the values of side a and side b
    double a = 3.21;
    double b = 6.14;
    compute_area_perimeter(a,b);
    
    //triangle
    //change the values of side c , side d and base and hight of triangle (hot)
    double c = 6.25;
    double d = 4.14;
    double base = 4.14;
    double hot = 5;
    compute_area_perimeter(c,d,base,hot);
    
    //circle
    double radius = 8.98;
    compute_area_perimeter(radius);
    
}

void wel()
{
    cout<<"Wellcome "<<prof_name<<", this is my shape calulator that calculates" <<endl<<"the area and perimeter of a square, rectangle, triangle and circle!";
}

void compute_area_perimeter(double a,double b)
{
    //side a and side b
    double perimeter = 2*(a+b);
    double area = a*b;
    cout<<endl<<endl<<"For rectangle or square the area is "<<showpoint<<setprecision(3)<<fixed<<area<<" and the perimeter is "<<showpoint<<setprecision(2)<<fixed<<perimeter<<".";
}

void compute_area_perimeter(double c,double d,double e,double f)
{
    //side c , side d and base and hight of triangle (hot)
    double perimeter = c + d + e;
    double area = .5*e*f;
    cout<<endl<<endl<<"For triangle the area is "<<showpoint<<setprecision(3)<<fixed<<area<<" and the perimeter is "<<showpoint<<setprecision(2)<<fixed<<perimeter<<".";
}

void compute_area_perimeter(double g)
{
    //radius = g
    double area = PI * (g * g);
    double perimeter = 2 * PI * g;
    cout<<endl<<endl<<"For circle the area is "<<showpoint<<setprecision(3)<<fixed<<area<<" and the perimeter is "<<showpoint<<setprecision(2)<<fixed<<perimeter<<".";
    
}
