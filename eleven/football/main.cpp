// LAB 11: Simple animations using transformations(Football goal)
// Name: Idogun John Owolabi
// Matric No: CPE/15/2418

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int x = 0, gd = DETECT, gm, points[] = {0, 220, 1600, 220, 1600, 900, 0, 900, 0, 220};
    int SOLID_FILL = 1, HORIZ_DIR = 0, VERT_DIR = 1;
    float y = 0;
    initgraph(&gd, &gm, NULL);
    setcolor(MAGENTA);
    settextstyle(6, HORIZ_DIR, 6);
    outtextxy(200, 250, "Hi");
    delay(1000);
    cleardevice();
    settextstyle(7, VERT_DIR, 1);
    outtextxy(200, 50, "GET READY FOR ANIMATION");
    delay(1000);
    cleardevice();
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    fillpoly(5, points);
    setcolor(WHITE);
    circle(100, 100, 25);
    delay(1000);
    line(100, 125, 100, 185);
    delay(1000);
    line(100, 135, 125, 170);
    delay(1000);
    line(100, 135, 75, 170);
    delay(1000);
    line(100, 185, 125, 220);
    delay(1000);
    line(100, 185, 75, 220);
    delay(1000);
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    fillellipse(135 + x, 210 - y, 10, 10);
    for (x = 0; x < 50; x++)
    {
        setcolor(WHITE);
        line(100, 185, 75 + x, 220 - y);
        delay(100);
        setcolor(BLACK);
        line(100, 185, 75 + x, 220 - y);
        y = y + 0.25;
    }
    setcolor(WHITE);
    line(100, 185, 125, 220);
    line(100, 185, 75, 220);
    for (x = 0, y = 0; y < 100; x++)
    {
        setcolor(RED);
        setfillstyle(SOLID_FILL, RED);
        fillellipse(135 + x, 210 - y, 10, 10);
        delay(10);
        setcolor(GREEN);
        setfillstyle(SOLID_FILL, GREEN);
        fillpoly(5, points);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL, BLACK);
        fillellipse(135 + x, 210 - y, 10, 10);
        y = y + 0.5;
    }
    for (; x < 490; x++)
    {
        setcolor(RED);
        setfillstyle(SOLID_FILL, RED);
        fillellipse(135 + x, y, 10, 10);
        delay(10);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL, BLACK);
        fillellipse(135 + x, y, 10, 10);
        y = y + 0.25;
    }
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    fillellipse(135 + x, y, 10, 10);
    delay(2000);
    cleardevice();
    setbkcolor(CYAN);
    settextstyle(3, HORIZ_DIR, 10);
    outtextxy(200, 80, "GOAL");
    getch();
    closegraph();
    return 0;
}