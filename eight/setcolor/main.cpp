// LAB 8: Coloring the Pictures (setcolor approach)
// Name: Idogun John Owolabi
// Matric No: CPE/15/2418

#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    circle(100, 100, 50);
    /* drawn in white color */
    setcolor(GREEN);
    circle(200, 200, 50);
    /* drawn in green color */
    getch();
    closegraph();
    return 0;
}
