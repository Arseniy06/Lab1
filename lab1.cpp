#include <iostream>

/*Даны два числа. Если оба они отрицательны, нужно взять противоположные им числа. Если
отрицательно только одно, к обоим числам прибавить 0,5. Если оба положительны и хотя бы одно находится
в промежутке [0,5; 2.0], то разделить оба числа на 10. Иначе, ничего не делать.*/

using namespace std;

int main() {
    float x;
    float y;
    cin<<x;
    cin<<y;
    bool xsign = false;
    bool ysign = false;
    bool xcond = false;
    bool ycond = false;
    if (x>=0){
        xsign = true;
    }
    if (y>=0){
        ysign = true;
    }
    if ((x<=0.5)and(x<=2.0)){
        xcond = true;
    }
    if((y>=0.5)and(y<=2.0)){
        ycond = true;
    }
    if (not(xsign or ysign)){
        x = x*(-1);
        y = y*(-1);
    }
    if (xsign xor ysign){
        x = x+0.5;
        y = y+0.5;
    }
    if(xsign and ysign){
        if not(xcond and ycond){
            x = x/10;
            y = y/10;
        }
    }
    cout<<"x: "<<x<<"y: "<<y<<endl;
}
