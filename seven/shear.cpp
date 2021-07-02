// LAB 7: Two Dimensional Transformations (Rotation)
// Name: Idogun John Owolabi
// Matric No: CPE/15/2418

#include <stdio.h>
#include <graphics.h>
void main()
{
    int gd = DETECT, gm;
    float shx = 0.5, shy;
    initgraph(&gd, &gm, NULL);
    line(100, 0, 200, 0);
    line(200, 0, 200, 200);
    line(200, 200, 100, 200);
    line(100, 200, 100, 0);
    setcolor(12);
    line((100 + (0 * shx)), 0, (200 + (0 * shx)), 0);
    line((200 + (0 * shx)), 0, (200 + (200 * shx)), 200);
    line((200 + (200 * shx)), 200, (100 + (200 * shx)), 200);
    line((100 + (200 * shx)), 200, (100 + (0 * shx)), 0);
    getch();
}