#include<stdio.h>
#include<graphics.h>
 
void drawcircle(int x0, int y0, int radius)
{
    int x = radius;
    int y = 0;
    int err = 0;
 
    while (x >= y)
    {
        putpixel(x0 + x, y0 + y, 7);
        putpixel(x0 + y, y0 + x, 7);
        putpixel(x0 - y, y0 + x, 7);
        putpixel(x0 - x, y0 + y, 7);
        putpixel(x0 - x, y0 - y, 7);
        putpixel(x0 - y, y0 - x, 7);
        putpixel(x0 + y, y0 - x, 7);
        putpixel(x0 + x, y0 - y, 7);
        if (err <= 0){
        y += 1;
        err += 2*y + 1;
        }
        if (err > 0){
        x -= 1;
        err -= 2*x + 1;
        }
    }
    getch();
    closegraph();
}
 
int main()
{
    int gdriver=DETECT, gmode, error, x = 150, y = 150, r = 100;
    initgraph(&gdriver, &gmode, NULL);
    drawcircle(x, y, r);
 
    return 0;
}
