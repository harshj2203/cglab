#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x1=2, y1=3, x2=5,y2=5, x3=4,y3=3;

    double x1d,x2d,x3d,y1d,y2d,y3d;
    x1d=x1-1;
    x2d=x2-1;
    x3d=x3-1;
    y1d=y1-1;
    y2d=y2-1;
    y3d=y3-1;
    

    
    double c=cos(45);
    double s=sin(45);

    
    x1d=x1d*c-y1d*s;
    x2d=x2d*c-y2d*s;
    x3d=x3d*c-y3d*s;
    y1d=x1d*s+y1d*c;
    y2d=x2d*s+y2d*c;
    y3d=x3d*s+y3d*c;

    
    x1d=x1d+1;
    x2d=x2d+1;
    x3d=x3d+1;
    y1d=y1d+1;
    y2d=y2d+1;
    y3d=y3d+1;
   

    cout<<"\n\nThe resultant triangle is:\n";
    cout<<x1d<<" "<<y1d<<endl;
    cout<<x2d<<" "<<y2d<<endl;
    cout<<x3d<<" "<<y3d<<endl;

    return 0;
}