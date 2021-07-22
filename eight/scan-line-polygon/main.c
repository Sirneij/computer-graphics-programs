// LAB 8: Coloring the Pictures (Scan line polygon algorithm)
// Name: Idogun John Owolabi
// Matric No: CPE/15/2418

#include <stdio.h>

#include <graphics.h>
int main()
{
    int n = 6, i, j, k, gd, gm, dy, dx;
    int x, y, temp;
    int a[20][2], xi[20];
    float slope[20];
    a[0][0] = 100;
    a[0][1] = 200;

    a[1][0] = 200;
    a[1][1] = 200;

    a[2][0] = 230;
    a[2][1] = 300;

    a[3][0] = 200;
    a[3][1] = 400;

    a[4][0] = 100;
    a[4][1] = 400;

    a[5][0] = 70;
    a[5][1] = 300;

    a[n][0] = a[0][0];
    a[n][1] = a[0][1];
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, NULL);
    /*- draw polygon -*/
    for (i = 0; i < n; i++)
    {
        line(a[i][0], a[i][1], a[i + 1][0], a[i + 1][1]);
    }
    getch();
    for (i = 0; i < n; i++)
    {
        dy = a[i + 1][1] - a[i][1];
        dx = a[i + 1][0] - a[i][0];
        if (dy == 0)
            slope[i] = 1.0;
        if (dx == 0)
            slope[i] = 0.0;
        if ((dy != 0) && (dx != 0)) /*- calculate inverse slope -*/
        {
            slope[i] = (float)dx / dy;
        }
    }
    for (y = 0; y < 480; y++)
    {
        k = 0;
        for (i = 0; i < n; i++)
        {
            if (((a[i][1] <= y) && (a[i + 1][1] > y)) ||
                ((a[i][1] > y) && (a[i + 1][1] <= y)))
            {
                xi[k] = (int)(a[i][0] + slope[i] * (y - a[i][1]));
                k++;
            }
        }
        for (j = 0; j < k - 1; j++) /*- Arrange x-intersections in order -*/
            for (i = 0; i < k - 1; i++)
            {
                if (xi[i] > xi[i + 1])
                {
                    temp = xi[i];
                    xi[i] = xi[i + 1];
                    xi[i + 1] = temp;
                }
            }
        setcolor(3);
        for (i = 0; i < k; i += 2)
        {
            line(xi[i], y, xi[i + 1] + 1, y);
            getch();
        }
    }
    return 0;
}