// LAB 7: Two Dimensional Transformations (Translation)
// Name: Idogun John Owolabi
// Matric No: CPE/15/2418

#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    int x1 = 300, y1 = 200, x2 = 350, y2 = 200, tx = 60, ty = 100, x3, y3, x4, y4;
    initgraph(&gd, &gm, NULL);
    setcolor(5);
    line(x1, y1, x2, y2);
    outtextxy(x2 + 2, y2 + 2, "Original line");
    x3 = x1 + tx;
    y3 = y1 + ty;
    x4 = x2 + tx;
    y4 = y2 + ty;
    setcolor(7);
    line(x3, y3, x4, y4);
    outtextxy(x4 + 2, y4 + 2, "Line after translation");
    getch();
    return 0;
}