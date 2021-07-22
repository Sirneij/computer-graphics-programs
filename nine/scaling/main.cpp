// Lab 9: Three Dimensional Transformations (Scaling)
// Name: Idogun John Owolabi
// Matric No: CPE/15/2418

#include <stdio.h>
#include <math.h>
#include <graphics.h>

int x1 = 100, x2 = 200, y_1 = 150, y2 = 250, mx, my, depth;
void draw();
void scale();
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
    scale();
    getch();
    return 0;
}
void draw()
{
    bar3d(x1, y_1, x2, y2, depth, 1);
}
void scale()
{
    int x = 2, y = 1, a1, a2, b1, b2, dep;
    a1 = mx + (x1 - mx) * x;
    a2 = mx + (x2 - mx) * x;
    b1 = my + (y_1 - my) * y;
    b2 = my + (y2 - my) * y;
    dep = (a2 - a1) / 4;
    bar3d(a1, b1, a2, b2, dep, 1);
    setcolor(5);
    draw();
}