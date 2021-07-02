// LAB 7: Two Dimensional Transformations (Rotation)
// Name: Idogun John Owolabi
// Matric No: CPE/15/2418

#include <stdio.h>
#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    float shx, shy = 0.5;
    initgraph(&gd, &gm, NULL);
    line(100, 10, 200, 10);
    line(200, 10, 200, 200);
    line(200, 200, 100, 200);
    line(100, 200, 100, 10);
    setcolor(12);
    line(100, 10 + (shy * 100), 200, 10 + (shy * 200));
    line(200, 10 + (shy * 200), 200, 200 + (shy * 200));
    line(200, 200 + (shy * 200), 100, 200 + (shy * 100));
    line(100, 200 + (shy * 100), 100, 10 + (shy * 100));
    getch();
    closegraph();
    return 0;
}