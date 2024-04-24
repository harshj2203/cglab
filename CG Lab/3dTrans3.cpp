#include<bits/stdc++.h>
using namespace std;

// 3d scaling
int main(){
    int x1=0, y1=3, z1=3;
    int x2=3, y2=3, z2=6;
    int x3=3, y3=0, z3=1;
    int x4=0, y4=0, z4=0;

    double x1d,x2d,x3d,y1d,y2d,y3d,x4d,y4d,z1d,z2d,z3d,z4d;

    int sx=2, sy=3, sz=3;
    
    x1d=x1*sx;
    x2d=x2*sx;
    x3d=x3*sx;
    x4d=x4*sx;
    y1d=y1*sy;
    y2d=y2*sy;
    y3d=y3*sy;
    y4d=y4*sy;
    z1d=z1*sz;
    z2d=z2*sz;
    z3d=z3*sz;
    z4d=z4*sz;
    
    cout<<"\n\nThe resultant answer is:\n";
    cout<<x1d<<" "<<y1d<<" "<<z1d<<endl;
    cout<<x2d<<" "<<y2d<<" "<<z2d<<endl;
    cout<<x3d<<" "<<y3d<<" "<<z3d<<endl;
    cout<<x4d<<" "<<y4d<<" "<<z4d;

    return 0;
}