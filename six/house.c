// LAB 6: Creating two dimensional objects (House)
// Name: Idogun John Owolabi
// Matric No: CPE/15/2418

#include <graphics.h>

void drawHouse()
{
    /* Draw Hut */
    setcolor(WHITE);
    rectangle(150, 180, 250, 300);
    rectangle(250, 180, 420, 300);
    rectangle(180, 250, 220, 300);

    line(200, 100, 150, 180);
    line(200, 100, 250, 180);
    line(200, 100, 370, 100);
    line(370, 100, 420, 180);

    /* Fill colours */
    setfillstyle(1, BROWN);
    floodfill(152, 182, WHITE);
    floodfill(252, 182, WHITE);
    setfillstyle(4, BLUE);
    floodfill(182, 252, WHITE);
    setfillstyle(7, GREEN);
    floodfill(200, 105, WHITE);
    floodfill(210, 105, WHITE);
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    drawHouse();
    getch();
    closegraph();
    return 0;
}