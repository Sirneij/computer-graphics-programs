// Lab 9: Three Dimensional Transformations (Translation)
// Name: Idogun John Owolabi
// Matric No: CPE/15/2418

#include <stdio.h>
#include <math.h>
#include <graphics.h>
int x1 = 100, y_1 = 200, x2 = 250, y2 = 250;
float mx, my, depth;
void draw();
void trans();
int main()
{
    int gd = DETECT, gm, c;
    initgraph(&gd, &gm, NULL);
    depth = (x2 - x1) / 4;
    mx = (x1 + x2) / 2;
    my = (y_1 + y2) / 2;
    draw();
    getch();
    cleardevice();
    trans();
    getch();
    return 0;
}
void draw()
{
    bar3d(x1, y_1, x2, y2, depth, 1);
}
void trans()
{
    int a1, a2, b1, b2, dep, x = 100, y = 200;
    a1 = x1 + x;
    a2 = x2 + x;
    b1 = y_1 + y;
    b2 = y2 + y;
    dep = (a2 - a1) / 4;
    bar3d(a1, b1, a2, b2, dep, 1);
    setcolor(5);
    draw();
}
