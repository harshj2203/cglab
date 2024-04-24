#include<bits/stdc++.h>
using namespace std;

int main(){
    double x1,x2,x3,y1,y2,y3,ang;
    int flag;
    // triangle
    cout<<"Enter x1,y1: ";
    cin>>x1>>y1;
    cout<<"Enter x2,y2: ";
    cin>>x2>>y2;
    cout<<"Enter x3,y3: ";
    cin>>x3>>y3;
    cout<<"Enter theta angle(in deg): ";
    cin>>ang;
    cout<<"Enter -1 for anti-clk wise rotation and 1 for clk-wise: ";
    cin>>flag;

    double c=cos(ang);
    double s;
    if(flag==-1) s=sin(ang);
    else if(flag==1) s=-sin(ang);
    else  {cout<<"Invalid input"; return 0;}

    double x1d,x2d,x3d,y1d,y2d,y3d;
    x1d=x1*c-y1*s;
    x2d=x2*c-y2*s;
    x3d=x3*c-y3*s;
    y1d=x1*s+y1*c;
    y2d=x2*s+y2*c;
    y3d=x3*s+y3*c;

    cout<<"\n\nThe resultant triangle after Rotation is:\n";
    cout<<x1d<<" "<<y1d<<endl;
    cout<<x2d<<" "<<y2d<<endl;
    cout<<x3d<<" "<<y3d;
}
//2 5 7 10 10 2 20 1 