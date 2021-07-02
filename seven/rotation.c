// LAB 7: Two Dimensional Transformations (Rotation)
// Name: Idogun John Owolabi
// Matric No: CPE/15/2418

#include <math.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    float x1 = 300, y1 = 200, x2 = 350, y2 = 200, x3, y3, x4, y4, a = 50, t;
    initgraph(&gd, &gm, NULL);
    setcolor(5);
    line(x1, y1, x2, y2);
    outtextxy(x2 + 2, y2 + 2, "Original line");
    t = a * (3.14 / 180);
    x3 = (x1 * cos(t)) - (y1 * sin(t));
    y3 = (x1 * sin(t)) + (y1 * cos(t));
    x4 = (x2 * cos(t)) - (y2 * sin(t));
    y4 = (x2 * sin(t)) + (y2 * cos(t));
    setcolor(7);
    line(x3, y3, x4, y4);
    outtextxy(x3 + 2, y3 + 2, "Line after rotation");
    getch();
    return 0;
}