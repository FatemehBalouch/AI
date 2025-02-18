#include <iostream>

using namespace std;

struct rectangle{
    int x,y;
    int length, width;
};

rectangle getRectangle(){
    rectangle r;
    cout<<"enter coordinates of rectangle(x,y): ";
    cin >>r.x>>r.y;
    cout <<"enter length : ";
    cin >>length;
    cout <<"enter width : ";
    cin >>width;
    return r;
}
void main(){
    rectangle rect1;
    rect1=getRectangle();
    cout<<"rectangle 1 : "<<x<<","<<y<<","<<length<<","<<width<<endl;
    return (rect1.x,rect1.y,rect1.length,rect1.width);
}
