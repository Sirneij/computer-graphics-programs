// LAB 7: Two Dimensional Transformations (Scaling)
// Name: Idogun John Owolabi
// Matric No: CPE/15/2418

#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    float x1 = 120, y1 = 100, x2 = 150, y2 = 100, sx = 2, sy = 2, x3, y3, x4, y4;
    initgraph(&gd, &gm, NULL);
    setcolor(5);
    line(x1, y1, x2, y2);
    outtextxy(x2 + 2, y2 + 2, "Original line");
    x3 = x1 * sx;
    y3 = y1 * sy;
    x4 = x2 * sx;
    y4 = y2 * sy;
    setcolor(7);
    line(x3, y3, x4, y4);
    outtextxy(x3 + 2, y3 + 2, "Line after scaling");
    getch();
    return 0;
}