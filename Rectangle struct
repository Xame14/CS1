#include <iostream>
using namespace std;

struct Rectangle{
    double w;
    double l;
};

Rectangle Rectangle_Defult(){
    Rectangle r = {0.0,0.0};
    return r;
}

Rectangle Rectangle_Defult(double w, double l){
    Rectangle r = {w,l};
    return r;
}

double getWidth(const Rectangle rec){
    return rec.w;
}

double getlength(const Rectangle rec){
    return rec.l;
}

void setwidth(Rectangle& rec, double width){
    rec.w = width;
}

void setlength(Rectangle& rec, double length){
    rec.l = length;
}

int main()
{
    Rectangle rec;
    rec.w = 6.5;
    rec.l = 3.3;
    cout<<"Rectangle width: "<<rec.w<<" and length: "<<rec.l<<endl;
    
    Rectangle rec2 = Rectangle_Defult();
    cout<<"Rectangle 2 width: "<<rec2.w<<" and length: "<<rec2.l<<endl;
    
    
    Rectangle rec3 = Rectangle_Defult(8.5,1.0);
    cout<<"Rectangle 3 width: "<<rec3.w<<" and length: "<<rec3.l<<endl;
    
    double w = 9.9;
    double l = 7.3;
    Rectangle rec4 = Rectangle_Defult(w,l);
    cout<<"Rectangle 4 width: "<<rec4.w<<" and length: "<<rec4.l<<endl;
    
    Rectangle rec5 = Rectangle_Defult(7.7,19.0);
    cout<<"Rectangle 5 width: "<<getWidth(rec5)<<" and length: "<<getlength(rec5)<<endl;
    
    Rectangle rec6;
    setlength(rec6, 8.9);
    setwidth(rec6,5.5);
    cout<<"Rectangle 6 width: "<<rec6.w<<" and length: "<<rec6.l<<endl;
    
    return 0;
}
