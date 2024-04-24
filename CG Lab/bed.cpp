#include <graphics.h>
#include <bits/stdc++.h>
using namespace std;

void BhlEllipseAlgo(int x0, int y0, int rx, int ry)
{
    int x = 0, y = ry;
    putpixel(round(x), round(y), WHITE);
    delay(100);

    int rxsq = rx * rx;
    int rysq = ry * ry;
    int tworxsq = 2 * rx * rx;
    int tworysq = 2 * ry * ry;
    int d1 = rysq - (rxsq * ry) + (0.25 * rxsq);
    int dx = tworysq * x;
    int dy = tworxsq * y;
    do
    {
        putpixel(round(x0 + x), round(y0 + y), WHITE);
        putpixel(round(x0 + x), round(y0 - y), WHITE);
        putpixel(round(x0 - x), round(y0 + y), WHITE);
        putpixel(round(x0 - x), round(y0 - y), WHITE);
        delay(100);
        if (d1 < 0)
        {
            x = x + 1;
            y = y;
            dx = dx + tworysq;
            d1 = d1 + dx + rysq;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            dx = dx + tworysq;
            dy = dy - tworxsq;
            d1 = d1 + dx - dy + rysq;
        }
        delay(50);
    } while (dx < dy);

    int d2 = rysq * (x + 0.5) * (x + 0.5) + rxsq * (y - 1) * (y - 1) - rxsq * rysq;
    do
    {
        putpixel(round(x0 + x), round(y0 + y), WHITE);
        putpixel(round(x0 + x), round(y0 - y), WHITE);
        putpixel(round(x0 - x), round(y0 + y), WHITE);
        putpixel(round(x0 - x), round(y0 - y), WHITE);
        delay(100);

        if (d2 > 0)
        {
            x = x;
            y = y - 1;
            dy = dy - tworxsq;
            d2 = d2 - dy + rxsq;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            dy = dy - tworxsq;
            dx = dx + tworysq;
            d2 = d2 + dx - dy + rxsq;
        }
        delay(50);
    } while (y > 0);
}

    int main()
    {
        int gd = DETECT, gm;
        initgraph(&gd, &gm, NULL);

        BhlEllipseAlgo(140, 140, 80, 60);
        delay(1000);
        closegraph();
        return 0;
    }