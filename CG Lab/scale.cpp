#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x1,x2,x3,y1,y2,y3,sx,sy;
    // Triangle
    cout<<"Enter x1,y1: ";
    cin>>x1>>y1;
    cout<<"Enter x2,y2: ";
    cin>>x2>>y2;
    cout<<"Enter x3,y3: ";
    cin>>x3>>y3;
    cout<<"Enter sx and sy: ";
    cin>>sx>>sy;

    long long x1d,x2d,x3d,y1d,y2d,y3d;
    x1d=x1*sx;
    x2d=x2*sx;
    x3d=x3*sx;
    y1d=y1*sy;
    y2d=y2*sy;
    y3d=y3*sy;

    cout<<"\n\nThe resultant triangle after scaling is:\n";
    cout<<x1d<<" "<<y1d<<endl;
    cout<<x2d<<" "<<y2d<<endl;
    cout<<x3d<<" "<<y3d;
}
//2 5 7 10 10 2 2 3