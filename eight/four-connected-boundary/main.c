// LAB 8: Coloring the Pictures (4-connected boundary fill)
// Name: Idogun John Owolabi
// Matric No: CPE/15/2418

#include <stdio.h>
#include <graphics.h>

void boundary_fill(int x, int y, int fcolor, int bcolor)
{
    if ((getpixel(x, y) != bcolor) && (getpixel(x, y) != fcolor))
    {
        delay(10);
        putpixel(x, y, fcolor);
        boundary_fill(x + 1, y, fcolor, bcolor);
        boundary_fill(x - 1, y, fcolor, bcolor);
        boundary_fill(x, y + 1, fcolor, bcolor);
        boundary_fill(x, y - 1, fcolor, bcolor);
    }
}
int main()
{
    int x = 104, y = 204, fcolor = 10, bcolor = 15;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    circle(100, 200, 45);
    boundary_fill(x, y, fcolor, bcolor);
    getch();
}