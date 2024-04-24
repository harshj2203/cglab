#include <graphics.h>
#include <math.h>
#include <stdio.h>
#include<bits/stdc++.h>

void DDA(int X0, int Y0, int X1, int Y1)
{
	int dx = X1 - X0;
	int dy = Y1 - Y0;

	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	float Xinc = dx / (float)steps;
	float Yinc = dy / (float)steps;

	float X = X0;
	float Y = Y0;
	for (int i = 0; i <= steps; i++)
	{
		putpixel(round(X), round(Y), RED); 
		X += Xinc;						   
		Y += Yinc;						   
		delay(100);						   
	}
}

// Driver program
int main()
{
	int gd = DETECT, gm;

	initgraph(&gd, &gm, "");

	int X0 = 200, Y0 = 200, X1 = 1400, Y1 = 1600;

	DDA(X0, Y0, X1, Y1);

	delay(2000);  
	closegraph(); 
	return 0;
}
