#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int xmin, xmax, ymin, ymax;

struct lines
{
    int x1, y1, x2, y2;
};

int sign(int x)
{
    if (x > 0)
        return 1;
    else
        return 0;
}

void clip(struct lines mylines)
{
    int bitA[4], bitB[4], i, var;

    setcolor(YELLOW);

    bitA[0] = sign(xmin - mylines.x1);
    bitB[0] = sign(xmin - mylines.x2);
    bitA[1] = sign(mylines.x1 - xmax);
    bitB[1] = sign(mylines.x2 - xmax);
    bitA[2] = sign(ymin - mylines.y1);
    bitB[2] = sign(ymin - mylines.y2);
    bitA[3] = sign(mylines.y1 - ymax);
    bitB[3] = sign(mylines.y2 - ymax);

    string initial = "", end = "", temp = "";

    for (i = 0; i < 4; i++)
    {
        if (bitA[i] == 0)
            initial += '0';
        else
            initial += '1';
    }
    for (i = 0; i < 4; i++)
    {
        if (bitB[i] == 0)
            end += '0';
        else
            end += '1';
    }

    float m = (mylines.y2 - mylines.y1) / (float)(mylines.x2 - mylines.x1);
    float c = mylines.y1 - m * mylines.x1;

    if (initial == end && end == "0000")
    {
        line(mylines.x1, mylines.y1, mylines.x2, mylines.y2); // visible
        return;
    }

    else
    {
        for (i = 0; i < 4; i++)
        {

            int val = (bitA[i] & bitB[i]);
            if (val == 0)
                temp += '0';
            else
                temp += '1';
        }

        if (temp != "0000") // invisible
            return;

        for (i = 0; i < 4; i++)
        {
            // if both bit are same hence we cannot find any intersection with boundary so continue
            if (bitA[i] == bitB[i])
                continue;
            // Otherwise there exist a intersection

            // Case when initial point is in left xmin
            if (i == 0 && bitA[i] == 1)
            {
                var = round(m * xmin + c);
                mylines.y1 = var;
                mylines.x1 = xmin;
            }
            // Case when final point is in left xmin
            if (i == 0 && bitB[i] == 1)
            {
                var = round(m * xmin + c);
                mylines.y2 = var;
                mylines.x2 = xmin;
            }
            // Case when initial point is in right of xmax
            if (i == 1 && bitA[i] == 1)
            {
                var = round(m * xmax + c);
                mylines.y1 = var;
                mylines.x1 = xmax;
            }
            // Case when final point is in right of xmax
            if (i == 1 && bitB[i] == 1)
            {
                var = round(m * xmax + c);
                mylines.y2 = var;
                mylines.x2 = xmax;
            }
            // Case when initial point is in top of ymin
            if (i == 2 && bitA[i] == 1)
            {
                var = round((float)(ymin - c) / m);
                mylines.y1 = ymin;
                mylines.x1 = var;
            }
            // Case when final point is in top of ymin
            if (i == 2 && bitB[i] == 1)
            {
                var = round((float)(ymin - c) / m);
                mylines.y2 = ymin;
                mylines.x2 = var;
            }
            // Case when initial point is in bottom of ymax
            if (i == 3 && bitA[i] == 1)
            {
                var = round((float)(ymax - c) / m);
                mylines.y1 = ymax;
                mylines.x1 = var;
            }
            // Case when final point is in bottom of ymax
            if (i == 3 && bitB[i] == 1)
            {
                var = round((float)(ymax - c) / m);
                mylines.y2 = ymax;
                mylines.x2 = var;
            }

            bitA[0] = sign(xmin - mylines.x1);
            bitB[0] = sign(xmin - mylines.x2);
            bitA[1] = sign(mylines.x1 - xmax);
            bitB[1] = sign(mylines.x2 - xmax);
            bitA[2] = sign(ymin - mylines.y1);
            bitB[2] = sign(ymin - mylines.y2);
            bitA[3] = sign(mylines.y1 - ymax);
            bitB[3] = sign(mylines.y2 - ymax);
        }

        initial = "", end = "";
        for (i = 0; i < 4; i++)
        {
            if (bitA[i] == 0)
                initial += '0';
            else
                initial += '1';
        }
        for (i = 0; i < 4; i++)
        {
            if (bitB[i] == 0)
                end += '0';
            else
                end += '1';
        }

        if (initial == end && end == "0000")
        {
            line(mylines.x1, mylines.y1, mylines.x2, mylines.y2);
            return;
        }
        else
            return;
    }
}

int main()
{
    int gd = DETECT, gm;

    xmin = 40;
    xmax = 100;
    ymin = 40;
    ymax = 80;

    initgraph(&gd, &gm, NULL);

    line(xmin, ymin, xmax, ymin);
    line(xmax, ymin, xmax, ymax);
    line(xmax, ymax, xmin, ymax);
    line(xmin, ymax, xmin, ymin);

    struct lines myline;

    myline.x1 = 45;
    myline.y1 = 0;
    myline.x2 = 55;
    myline.y2 = 150;

    line(myline.x1, myline.y1, myline.x2, myline.y2);
    clip(myline);
    delay(4000);
    closegraph();
    return 0;
}
