// LAB 8: Coloring the Pictures (setfillstyle function)
// Name: Idogun John Owolabi
// Matric No: CPE/15/2418

#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    setfillstyle(8, RED);
    circle(100, 100, 50);
    floodfill(100, 100, WHITE);
    getch();
    closegraph();
    return 0;
}