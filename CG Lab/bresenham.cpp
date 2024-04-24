#include <graphics.h>
#include<bits/stdc++.h>
using namespace std;

void BHL(int x1, int x2, int y1, int y2){

    int dx=abs(x2-x1);
    int dy=abs(y2-y1);
    int s=max(dx,dy);

    int pk=2*dy-dx;
    int x=x1, y=y1;
    putpixel(round(x),round(y), RED);
   
    for(int k=0;k<s;k++){
        if(pk<0){
            x++;
            putpixel(round(x),round(y), RED);
            delay(100);
            pk=pk+2*dy;
        }
        else{
            x++;
            y++;
            putpixel(round(x),round(y), RED);
            delay(100);
            pk=pk+2*dy-2*dx;
        }
        
    }

 }

int main() 
{ 
    int gd = DETECT, gm; 
  
    initgraph(&gd, &gm, ""); 
    
    BHL(100,10,300,500);
    delay(2000);
    closegraph();
    return 0; 
}