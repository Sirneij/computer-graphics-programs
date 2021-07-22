// LAB 8: Coloring the Pictures (8-connected boundary fill)
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
        boundary_fill(x, y + 1, fcolor, bcolor);
        boundary_fill(x + 1, y + 1, fcolor, bcolor);
        boundary_fill(x - 1, y - 1, fcolor, bcolor);
        boundary_fill(x - 1, y, fcolor, bcolor);
        boundary_fill(x, y - 1, fcolor, bcolor);
        boundary_fill(x - 1, y + 1, fcolor, bcolor);
        boundary_fill(x + 1, y - 1, fcolor, bcolor);
    }
}
int main()
{
    int x = 70, y = 55, fcolor = 6, bcolor = 15;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    rectangle(50, 50, 100, 100);
    boundary_fill(x, y, fcolor, bcolor);
    getch();

    return 0;
}