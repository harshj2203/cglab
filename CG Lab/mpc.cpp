#include <graphics.h>
#include <bits/stdc++.h>
using namespace std;

void mpc(int x_centre, int y_centre, int r)
{

    int x = 0, y = r;

    putpixel(x + x_centre, y + y_centre, WHITE);
    putpixel(x + x_centre, -y + y_centre, WHITE);
    putpixel(y + x_centre, x + y_centre, WHITE);
    putpixel(-y + x_centre, x + y_centre, WHITE);
    delay(100);

    double P = (5 / 4.0) - r;
    while (x < y)
    {
        if (P < 0)
            P = P + 2 * x + 3;

        else
        {
            P = P + 2 * x - 2 * y + 5;
            y--;
        }
        x++;

        putpixel(x + x_centre, y + y_centre, WHITE);
        putpixel(-x + x_centre, y + y_centre, WHITE);
        putpixel(x + x_centre, -y + y_centre, WHITE);
        putpixel(-x + x_centre, -y + y_centre, WHITE);
        delay(100);

        if (x != y)
        {
            putpixel(y + x_centre, x + y_centre, WHITE);
            putpixel(-y + x_centre, x + y_centre, WHITE);
            putpixel(y + x_centre, -x + y_centre, WHITE);
            putpixel(-y + x_centre, -x + y_centre, WHITE);
            delay(100);
        }
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    mpc(100, 100, 70);
    delay(5000);
    closegraph();
    return 0;
}