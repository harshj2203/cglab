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

    double P = 3 - 2 * r;
    while (x < y)
    {
        x++;

        if (P < 0)
            P = P + 4 * x + 6;

        else
        {
            y--;
            P = P + 4 * x - 4 * y + 10;
        }

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