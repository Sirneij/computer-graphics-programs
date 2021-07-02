// LAB 6: Creating two dimensional objects (Car)
// Name: Idogun John Owolabi
// Matric No: CPE/15/2418

#include <graphics.h>

void drawCar()
{
    line(0, 300, 640, 300);
    circle(100, 285, 15);
    circle(200, 285, 15);
    circle(100, 285, 5);
    circle(200, 285, 5);
    line(65, 285, 85, 285);
    line(115, 285, 185, 285);
    line(215, 285, 235, 285);
    line(65, 285, 65, 260);
    line(235, 285, 235, 260);
    line(65, 260, 100, 255);
    line(235, 260, 200, 255);
    line(100, 255, 115, 235);
    line(200, 255, 185, 235);
    line(115, 235, 185, 235);
    line(179, 238, 152, 238);
    line(179, 255, 152, 255);
    line(152, 255, 152, 238);
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    drawCar();
    getch();
    closegraph();
    return 0;
}