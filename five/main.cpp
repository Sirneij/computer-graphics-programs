// LAB 5: Creating various types of texts and fonts
// Name: Idogun John Owolabi
// Matric No: CPE/15/2418

#include <graphics.h>
#include <conio.h>

int main()
{
    //initilizing graphic driver and
    //graphic mode variable
    int gd = DETECT, gm;

    //calling initgraph with parameters
    initgraph(&gd, &gm, NULL);

    //initilizing variables
    int x = 75, y = 75, f = 0;

    //for loop to print different fonts
    for (f = 0; f <= 5; f++)
    {
        settextstyle(f, HORIZ_DIR, 1);
        outtextxy(x, y, "IDOGUN JOHN O. - CPE/15/2418");
        y = y + 20;
    }

    getch();

    return 0;
}