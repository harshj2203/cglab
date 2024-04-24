#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x1,x2,x3,x4,y1,y2,y3,y4,tx,ty;
    // Rectangle
    cout<<"Enter x1,y1: ";
    cin>>x1>>y1;
    cout<<"Enter x2,y2: ";
    cin>>x2>>y2;
    cout<<"Enter x3,y3: ";
    cin>>x3>>y3;
    cout<<"Enter x4,y4: ";
    cin>>x4>>y4;
    cout<<"Enter tx and ty: ";
    cin>>tx>>ty;

    long long x1d,x2d,x3d,x4d,y1d,y2d,y3d,y4d;
    x1d=x1+tx;
    x2d=x2+tx;
    x3d=x3+tx;
    x4d=x4+tx;
    y1d=y1+ty;
    y2d=y2+ty;
    y3d=y3+ty;
    y4d=y4+ty;

    cout<<"\n\nThe resultant rectangle after Translation is:\n";
    cout<<x1d<<" "<<y1d<<endl;
    cout<<x2d<<" "<<y2d<<endl;
    cout<<x3d<<" "<<y3d<<endl;
    cout<<x4d<<" "<<y4d;
}

//1 2 5 2 5 5 1 5 4 6