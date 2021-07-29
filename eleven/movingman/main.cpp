// LAB 11: Simple animations using transformations(Moving man)
// Name: Idogun John Owolabi
// Matric No: CPE/15/2418

#include <stdio.h>
#include <graphics.h>
int SOLID_FILL = 1;
int main()
{
    int gd = DETECT, gm, i;
    initgraph(&gd, &gm, NULL);
    //creation of man object by using circle,line.
    setcolor(7);
    setfillstyle(SOLID_FILL, 10);
    circle(50, 50, 30); // drawing head
    floodfill(52, 52, 7);
    setcolor(13);
    line(50, 80, 50, 200);  //drawing body
    line(50, 110, 20, 140); //left hand
    line(50, 110, 80, 140); //right hand
    line(50, 200, 20, 230); //left leg
    line(50, 200, 80, 230); //right leg
    // for loop for moving man
    for (i = 50; i <= getmaxx(); i++)
    {
        setcolor(7);
        setfillstyle(SOLID_FILL, 10);
        circle(i, 50, 30); // drawing head
        floodfill(i + 2, 52, 7);
        setcolor(13);
        line(i, 80, i, 200);       //drawing body
        line(i, 110, i - 30, 140); //left hand
        line(i, 110, i + 30, 140); //right hand
        line(i, 200, i - 30, 230); //left leg
        line(i, 200, i + 30, 230); //right leg
        cleardevice();
        delay(10);
    }
    //doing simple animation using translation
    for (i = 50; i <= getmaxx() / 2; i++)
    {
        setcolor(7);
        setfillstyle(SOLID_FILL, 10);
        circle(i, 50, 30); // drawing head
        floodfill(i + 2, 52, 7);
        setcolor(13);
        line(i, 80, i, 200);       //drawing body
        line(i, 110, i - 30, 140); //left hand
        line(i, 110, i + 30, 140); //right hand
        line(i, 200, i - 30, 230); //left leg
        line(i, 200, i + 30, 230); //right leg
        cleardevice();
        delay(10);
    }
    getch();
    return 0;
}