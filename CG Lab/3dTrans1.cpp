#include<bits/stdc++.h>
using namespace std;

// 3d translation
int main(){
    int x1=0, y1=3, z1=1;
    int x2=3, y2=3, z2=2;
    int x3=3, y3=0, z3=0;
    int x4=0, y4=0, z4=0;

    double x1d,x2d,x3d,y1d,y2d,y3d,x4d,y4d,z1d,z2d,z3d,z4d;

    int tx=1, ty=1, tz=2;
    
    x1d=x1+tx;
    x2d=x2+tx;
    x3d=x3+tx;
    x4d=x4+tx;
    y1d=y1+ty;
    y2d=y2+ty;
    y3d=y3+ty;
    y4d=y4+ty;
    z1d=z1+tz;
    z2d=z2+tz;
    z3d=z3+tz;
    z4d=z4+tz;
    
    
    cout<<"\n\nThe resultant answer is:\n";
    cout<<x1d<<" "<<y1d<<" "<<z1d<<endl;
    cout<<x2d<<" "<<y2d<<" "<<z2d<<endl;
    cout<<x3d<<" "<<y3d<<" "<<z3d<<endl;
    cout<<x4d<<" "<<y4d<<" "<<z4d;

    return 0;
}