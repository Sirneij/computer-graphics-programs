// LAB 8: Coloring the Pictures (fillellipse approach)
// Name: Idogun John Owolabi
// Matric No: CPE/15/2418

#include <graphics.h>

main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    fillellipse(100, 100, 50, 25);
    getch();
    closegraph();
    return 0;
}