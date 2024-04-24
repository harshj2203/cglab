#include <bits/stdc++.h>
#include <graphics.h>

typedef struct coordinate
{
    int x, y;
    char code[4];
} obj;

// Function for drawing clipping window
void drawwindow();
// Function for drawing the line
void drawline(obj p1, obj p2);

// Function to compute the region code
obj calcode(obj p);

// Visible line
int visibility(obj p1, obj p2);

// Implementing mid-point sub-division line clipping algorithm
void midsub(obj p1, obj p2)
{
    obj mid;
    int v;
    p1 = calcode(p1); 
    p2 = calcode(p2);
    v = visibility(p1, p2);

    // If the line lies inside the window
    switch (v)
    {
    case 0:
        drawline(p1, p2);
        break;
    // If the line is invisible i.e. lies outside the window
    case 1:
        break;

    // If the line is a clipping candidate
    case 2:
        mid.x = p1.x + (p2.x - p1.x) / 2;
        mid.y = p1.y + (p2.y - p1.y) / 2;
        midsub(p1, mid);
        mid.x = mid.x + 1;
        mid.y = mid.y + 1;
        midsub(mid, p2);
        break;
    }
}

// function for clipping window
void drawwindow()
{
    setcolor(BLUE);
    line(150, 100, 450, 100);
    line(450, 100, 450, 400);
    line(450, 400, 150, 400);
    line(150, 400, 150, 100);
}

// function for line
void drawline(obj p1, obj p2)
{
    setcolor(7);
    line(p1.x, p1.y, p2.x, p2.y);
}


// function for assigning the bitcodes to the end-points
obj calcode(obj p)
{
    obj objemp;
    if (p.y <= 100)
        objemp.code[0] = '1';
    else
        objemp.code[0] = '0';
    if (p.y >= 400)
        objemp.code[1] = '1';
    else
        objemp.code[1] = '0';
    if (p.x >= 450)
        objemp.code[2] = '1';
    else
        objemp.code[2] = '0';
    if (p.x <= 150)
        objemp.code[3] = '1';
    else
        objemp.code[3] = '0';
    objemp.x = p.x;
    objemp.y = p.y;
    return (objemp);
}

// function to check if the line lies in the clipping window or not
int visibility(obj p1, obj p2)
{
    int i, flag = 0;
    for (i = 0; i < 4; i++)
    {
        if ((p1.code[i] != '0') || (p2.code[i] != '0'))
            flag = 1;  
    }
    if (flag == 0)
        return (0); //visible
    for (i = 0; i < 4; i++)
    {
        if ((p1.code[i] == p2.code[i]) && (p1.code[i] == '1'))
            flag = 0;
    }
    if (flag == 0)
        return (1); //invisible
    return (2);     //candidate
}


int main()
{
    int gd = DETECT, gm, v;
    obj p1, p2, objemp;
    initgraph(&gd, &gm, NULL);

    p1.x = 150, p1.y = 100, p2.x = 350, p2.y = 450;

    drawwindow();

    drawline(p1, p2);
    delay(1000);

    cleardevice();
    drawwindow();
    delay(1000);
    midsub(p1, p2);
    getch();
    closegraph();
    return (0);
}