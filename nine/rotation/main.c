// Lab 9: Three Dimensional Transformations (Rotation)
// Name: Idogun John Owolabi
// Matric No: CPE/15/2418

#include <stdio.h>
#include <math.h>
#include <graphics.h>
int x1 = 100, x2 = 200, y_1 = 120, y2 = 220, mx, my, depth;
void draw();
void rotate();
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
    rotate();
    getch();
    return 0;
}
void draw()
{
    bar3d(x1, y_1, x2, y2, depth, 1);
}
void rotate()
{
    float t = 90;
    int a1, b1, a2, b2, dep;
    t = t * (3.14 / 180);
    a1 = mx + (x1 - mx) * cos(t) - (y_1 - my) * sin(t);
    a2 = mx + (x2 - mx) * cos(t) - (y2 - my) * sin(t);
    b1 = my + (x1 - mx) * sin(t) - (y_1 - my) * cos(t);
    b2 = my + (x2 - mx) * sin(t) - (y2 - my) * cos(t);
    if (a2 > a1)
        dep = (a2 - a1) / 4;
    else
        dep = (a1 - a2) / 4;
    bar3d(a1, b1, a2, b2, dep, 1);
    setcolor(5);
}
