#include <graphics.h>
#include <bits/stdc++.h>
using namespace std;

void Mpe(int x0, int y0, int rx, int ry)
{
    int x = 0, y = ry;
    int pk1 = ry * ry + rx * rx / 4 - rx * rx * ry;
    int dx = 2 * ry * ry * x; // 0
    int dy = 2 * rx * rx * y;

    while (dx < dy)
    {
        putpixel(round(x0 + x), round(y0 + y), WHITE);
        putpixel(round(x0 + x), round(y0 - y), WHITE);
        putpixel(round(x0 - x), round(y0 + y), WHITE);
        putpixel(round(x0 - x), round(y0 - y), WHITE);
        delay(100);
        if (pk1 < 0)
        {
            x++;
            dx = 2 * ry * ry * x;
            pk1 = pk1 + dx + ry * ry;
        }
        else
        {
            x++;
            y--;
            dx = 2 * ry * ry * x;
            dy = 2 * rx * rx * y;
            pk1 = pk1 + dx - dy + ry * ry;
        }
    }

    int pk2 = ry * ry * (x + 0.5) * (x + 0.5) + rx * rx * (y - 1) * (y - 1) - rx * rx * ry * ry;
    while (y >= 0)
    {
        putpixel(round(x0 + x), round(y0 + y), WHITE);
        putpixel(round(x0 + x), round(y0 - y), WHITE);
        putpixel(round(x0 - x), round(y0 + y), WHITE);
        putpixel(round(x0 - x), round(y0 - y), WHITE);
        delay(100);
        if (pk2 >= 0)
        {
            y--;
            dy = 2 * rx * rx * y;
            pk2 = pk2 - dy + rx * rx;
        }
        else
        {
            x++;
            y--;
            dx = 2 * ry * ry * x;
            dy = 2 * rx * rx * y;
            pk2 = pk2 + dx - dy + rx * rx;
        }
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    Mpe(140, 140, 80, 60);
    delay(4000);
    closegraph();
    return 0;
}