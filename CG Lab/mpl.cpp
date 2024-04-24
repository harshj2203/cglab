#include <graphics.h>
#include<bits/stdc++.h>
using namespace std;

void mpl(int x1, int y1, int x2, int y2){

    int dx=abs(x2-x1);
    int dy=abs(y2-y1);
    int s=max(dx,dy);

    int pk=2*dy-dx;
    int x=x1, y=y1;
    putpixel(round(x),round(y), YELLOW);

    for(int k=0;k<s;k++){
        if(pk<0){
            x++;
            pk=pk+2*dy;
        }
        else{
            x++;
            y++;
            pk=pk+2*dy-2*dx;
        }
        putpixel(round(x),round(y), YELLOW);
        delay(100);
             
    }
 }

int main() 
{ 
    int gd = DETECT, gm; 
    initgraph(&gd, &gm, NULL); 
    
    mpl(40,80,90,120);
    delay(5000);
    closegraph();
    return 0; 
}