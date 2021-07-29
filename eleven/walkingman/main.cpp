// LAB 11: Simple animations using transformations(Walking man)
// Name: Idogun John Owolabi
// Matric No: CPE/15/2418

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
int main()
{
    int gd = DETECT, gm = DETECT, c = -200, i = 0, x = 40, l = 15, h = 15, ht = 0;
    initgraph(&gd, &gm, NULL);
    cleardevice();
    setcolor(BROWN);
    line(0, 201, 600, 201);
cont:
    while (!kbhit())
    {
        setcolor(4);
        ellipse(x, 100, 0, 180, 50, 30);
        line(x - 50, 100, x + 50, 100);
        line(x, 100, x, 150);
        circle(x - 20, 115, 15);
        line(x - 20, 130, x - 20, 175);
        line(x - 20, 175, x - 20 - l, 200);
        line(x - 20, 175, x - 20 + l, 200);
        line(x - 20, 140, x, 150);
        line(x - 20, 140, x - 20 - h, 160);
        setcolor(0);
        delay(50);
        ellipse(x, 100, 0, 180, 50, 30);
        line(x - 50, 100, x + 50, 100);
        line(x, 100, x, 150);
        circle(x - 20, 115, 15);
        line(x - 20, 130, x - 20, 175);
        line(x - 20, 175, x - 20 - l, 200);
        line(x - 20, 175, x - 20 + l, 200);
        line(x - 20, 140, x, 150);
        line(x - 20, 140, x - 20 - h, 160);
        line(x + 50, 100, x + 50, 200);
        x++;
        l--;
        if (l == -15)
            l = 15;
        if (ht == 1)
            h++;
        else
            h--;
        if (h == 15)
            ht = 0;
        else if (h == -15)
            ht = 1;
    }
    if (getch() == ' ')
    {
        while (!kbhit())
            ;
        getch();
        goto cont;
    }
    return 0;
}